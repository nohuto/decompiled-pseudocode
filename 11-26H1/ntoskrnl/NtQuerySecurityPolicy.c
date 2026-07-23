/*
 * XREFs of NtQuerySecurityPolicy @ 0x140815400
 * Callers:
 *     DifNtQuerySecurityPolicyWrapper @ 0x140689290 (DifNtQuerySecurityPolicyWrapper.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     SepCaptureUnicodeStringArray @ 0x140925834 (SepCaptureUnicodeStringArray.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     SepReleaseUnicodeStringArray @ 0x140A8BA1C (SepReleaseUnicodeStringArray.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQuerySecurityPolicy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        volatile void *a5,
        unsigned int *Address)
{
  __int64 v7; // r15
  void *Pool2; // rsi
  char PreviousMode; // di
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int *v15; // r15
  void *v16; // r14
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int Length; // [rsp+44h] [rbp-74h]
  int Src[3]; // [rsp+64h] [rbp-54h] BYREF
  __int64 v23; // [rsp+70h] [rbp-48h] BYREF
  __int64 v24; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v25[4]; // [rsp+80h] [rbp-38h] BYREF

  v7 = a3;
  v23 = 0LL;
  v24 = 0LL;
  Pool2 = 0LL;
  v25[0] = 0LL;
  Src[0] = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(a3) = PreviousMode;
  v12 = SepCaptureUnicodeStringArray(a1, 1LL, a3, &v23);
  if ( v12 >= 0 )
  {
    LOBYTE(v13) = PreviousMode;
    v12 = SepCaptureUnicodeStringArray(a2, 1LL, v13, &v24);
    if ( v12 >= 0 )
    {
      LOBYTE(v14) = PreviousMode;
      v12 = SepCaptureUnicodeStringArray(v7, 1LL, v14, v25);
      if ( v12 >= 0 )
      {
        if ( PreviousMode == 1 )
        {
          ProbeForWrite(a4, 4uLL, 4u);
          v15 = Address;
          Length = RtlReadULongFromUser(Address);
          if ( !Length )
          {
            v12 = -1073741811;
            goto LABEL_29;
          }
          ProbeForWrite(Address, 4uLL, 4u);
          v16 = (void *)a5;
          if ( a5 )
          {
            ProbeForWrite(a5, Length, 1u);
            Pool2 = (void *)ExAllocatePool2(0x101uLL);
            if ( !Pool2 )
            {
              v12 = -1073741670;
              goto LABEL_29;
            }
          }
        }
        else
        {
          v16 = (void *)a5;
          Pool2 = (void *)a5;
          v15 = Address;
          Length = *Address;
        }
        if ( SepRmCapTableLock.KernelShadowStack )
        {
          if ( !Pool2 || Length )
            v12 = guard_dispatch_icall_no_overrides(v23, v24);
          else
            v12 = -1073741811;
        }
        else
        {
          v12 = -1073741637;
        }
        if ( (int)(v12 + 0x80000000) < 0 || v12 == -1073741789 )
        {
          if ( PreviousMode )
            RtlWriteULongToUser(a4, Src[0]);
          else
            RtlCopyVolatileMemory(a4, Src, 4uLL);
          if ( PreviousMode )
          {
            RtlWriteULongToUser(v15, Length);
            v17 = Length;
          }
          else
          {
            v17 = Length;
            *v15 = Length;
          }
          if ( v16 && PreviousMode == 1 && v12 >= 0 )
            RtlCopyToUser(v16, Pool2, v17);
        }
      }
    }
  }
LABEL_29:
  LOBYTE(v11) = PreviousMode;
  SepReleaseUnicodeStringArray(v23, v11);
  LOBYTE(v18) = PreviousMode;
  SepReleaseUnicodeStringArray(v24, v18);
  LOBYTE(v19) = PreviousMode;
  SepReleaseUnicodeStringArray(v25[0], v19);
  if ( Pool2 && PreviousMode == 1 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v12;
}
