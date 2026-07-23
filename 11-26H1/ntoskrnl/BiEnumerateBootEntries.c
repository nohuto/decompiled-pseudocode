/*
 * XREFs of BiEnumerateBootEntries @ 0x1409A1444
 * Callers:
 *     BiBuildIdentifierList @ 0x1409A5E6C (BiBuildIdentifierList.c)
 * Callees:
 *     ZwEnumerateBootEntries @ 0x140729CA0 (ZwEnumerateBootEntries.c)
 *     BiAcquirePrivilege @ 0x1409A2D48 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409A2DFC (BiReleasePrivilege.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateBootEntries(_QWORD *a1, ULONG *a2)
{
  int v4; // ebx
  void *Pool2; // rax
  void *v6; // rdi
  NTSTATUS v7; // eax
  ULONG BufferLength; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = BiAcquirePrivilege(22LL, &v10);
  if ( v4 >= 0 )
  {
    BufferLength = 0x2000;
    Pool2 = (void *)ExAllocatePool2(0x102uLL);
    v6 = Pool2;
    if ( !Pool2 )
      BufferLength = 0;
    while ( 1 )
    {
      v7 = ZwEnumerateBootEntries(Pool2, &BufferLength);
      v4 = v7;
      if ( v7 != -1073741789 )
        break;
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
      Pool2 = (void *)ExAllocatePool2(0x102uLL);
      v6 = Pool2;
      if ( !Pool2 )
      {
        v4 = -1073741670;
        goto LABEL_11;
      }
    }
    if ( v7 < 0 )
    {
      BiLogMessage(4LL, L"Failed to enumerate boot entries. Status: %x", (unsigned int)v7);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
    }
    else
    {
      *a2 = BufferLength;
      *a1 = v6;
    }
LABEL_11:
    BiReleasePrivilege(&v10);
  }
  return (unsigned int)v4;
}
