/*
 * XREFs of NtGdiXFORMOBJ_iGetXform @ 0x1400D4A30
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1400D525C (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     XFORMOBJ_iGetXform @ 0x1400D52B0 (XFORMOBJ_iGetXform.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_iGetXform(__int64 a1, __int64 a2)
{
  void *v2; // rbx
  ULONG Xform; // edi
  struct _GRETHREAD *CurrentThread; // rax
  XFORMOBJ *v6; // rax
  struct W32_PUSH_LOCK *v8[4]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v9; // [rsp+40h] [rbp-78h]
  __int128 Src; // [rsp+90h] [rbp-28h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-18h]

  v2 = (void *)a2;
  Xform = -1;
  Src = 0LL;
  v11 = 0LL;
  CurrentThread = GreGetCurrentThread(0LL, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v8, CurrentThread);
  if ( v9 )
  {
    v6 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(v9, a1);
    if ( v6 )
    {
      Xform = XFORMOBJ_iGetXform(v6, (XFORML *)((unsigned __int64)&Src & -(__int64)(v2 != 0LL)));
      if ( Xform != -1 )
      {
        if ( v2 )
        {
          if ( (unsigned __int64)v2 >= MmUserProbeAddress )
            v2 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v2, &Src, 0x18uLL);
        }
      }
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v8);
    return Xform;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v8);
    return 0xFFFFFFFFLL;
  }
}
