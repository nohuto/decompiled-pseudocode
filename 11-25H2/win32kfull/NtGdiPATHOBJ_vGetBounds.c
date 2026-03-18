/*
 * XREFs of NtGdiPATHOBJ_vGetBounds @ 0x1400D2420
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D3CC4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiPATHOBJ_vGetBounds(__int64 a1, __int64 a2)
{
  void *v2; // rbx
  struct _GRETHREAD *CurrentThread; // rax
  PATHOBJ *v5; // rax
  _BYTE v7[32]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v8; // [rsp+40h] [rbp-78h]
  _RECTFX prectfx; // [rsp+90h] [rbp-28h] BYREF

  v2 = (void *)a2;
  prectfx = 0LL;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v7, CurrentThread);
  if ( v8 )
  {
    v5 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v8, a1);
    if ( v5 )
    {
      PATHOBJ_vGetBounds(v5, &prectfx);
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v2, &prectfx, 0x10uLL);
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v7);
    return 0LL;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v7);
    return 3221225485LL;
  }
}
