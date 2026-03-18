/*
 * XREFs of BiEnumerateBootEntries @ 0x1409D0464
 * Callers:
 *     BiBuildIdentifierList @ 0x1409D4E8C (BiBuildIdentifierList.c)
 * Callees:
 *     ZwEnumerateBootEntries @ 0x1407250D0 (ZwEnumerateBootEntries.c)
 *     BiAcquirePrivilege @ 0x1409D1D68 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409D1E1C (BiReleasePrivilege.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateBootEntries(_QWORD *a1, int *a2)
{
  int v4; // ebx
  __int64 Pool2; // rax
  void *v6; // rdi
  int v7; // eax
  int v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = BiAcquirePrivilege(22LL, &v10);
  if ( v4 >= 0 )
  {
    v9 = 0x2000;
    Pool2 = ExAllocatePool2(0x102uLL);
    v6 = (void *)Pool2;
    if ( !Pool2 )
      v9 = 0;
    while ( 1 )
    {
      v7 = ZwEnumerateBootEntries(Pool2, (__int64)&v9);
      v4 = v7;
      if ( v7 != -1073741789 )
        break;
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
      Pool2 = ExAllocatePool2(0x102uLL);
      v6 = (void *)Pool2;
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
      *a2 = v9;
      *a1 = v6;
    }
LABEL_11:
    BiReleasePrivilege(&v10);
  }
  return (unsigned int)v4;
}
