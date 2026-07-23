/*
 * XREFs of sub_140AB7034 @ 0x140AB7034
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x140262E00 (KeExpandKernelStackAndCalloutEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140AB7034(__int64 a1, _DWORD *a2)
{
  NTSTATUS v3; // ebx
  void *v4; // rdi
  int v5; // r12d
  void *v6; // rsi
  unsigned int v7; // r14d
  int v8; // r15d
  void *Pool2; // rax
  __int128 Address; // [rsp+50h] [rbp-78h] BYREF
  __int128 Length; // [rsp+60h] [rbp-68h]
  void *Parameter; // [rsp+70h] [rbp-58h] BYREF
  int v14; // [rsp+78h] [rbp-50h]
  int v15; // [rsp+7Ch] [rbp-4Ch]
  void *v16; // [rsp+80h] [rbp-48h]
  __int64 v17; // [rsp+88h] [rbp-40h]
  size_t Size; // [rsp+E8h] [rbp+20h]

  v3 = 0;
  Address = 0LL;
  Length = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  if ( a2 )
  {
    RtlCopyFromUser(&Address, a2, 0x20uLL);
    ProbeForRead((volatile void *)Address, (unsigned int)Length, 1u);
    if ( (_QWORD)Address && (_DWORD)Length )
    {
      v5 = Length;
      Size = (unsigned int)Length;
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v4 = Pool2;
      if ( Pool2 )
      {
        RtlCopyFromUser(Pool2, (void *)Address, Size);
        if ( *((_QWORD *)&Address + 1) )
          v8 = DWORD1(Length);
      }
      else
      {
        v3 = -1073741801;
      }
    }
    else
    {
      v3 = -1073741789;
    }
    if ( v3 >= 0 )
    {
      Parameter = v4;
      v14 = v5;
      v15 = v8;
      v16 = 0LL;
      v17 = 0LL;
      v3 = KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)Callout, &Parameter, 0x4C00uLL, 0, 0LL);
      if ( v3 >= 0 )
      {
        v6 = v16;
        v7 = v17;
        v3 = HIDWORD(v17);
      }
      if ( v3 >= 0 )
      {
        if ( !*((_QWORD *)&Address + 1) )
        {
LABEL_16:
          RtlWriteULongToUser(a2 + 5, v7);
          goto LABEL_18;
        }
        if ( DWORD1(Length) >= v7 )
        {
          RtlCopyToUser(*((void **)&Address + 1), v6, v7);
          goto LABEL_16;
        }
        v3 = -1073741789;
      }
    }
  }
  else
  {
    v3 = -1073741789;
  }
LABEL_18:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v3;
}
