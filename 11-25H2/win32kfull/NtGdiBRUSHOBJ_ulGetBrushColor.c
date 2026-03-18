/*
 * XREFs of NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1400D4870
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D49D8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_ulGetBrushColor(ULONG64 a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  const void *v5; // rdx
  _DWORD *v6; // rdi
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+30h] [rbp-98h]
  struct W32_PUSH_LOCK *v11[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v12; // [rsp+60h] [rbp-68h]

  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v11, CurrentThread);
  if ( v12 )
  {
    v4 = 0;
    v9 = 0LL;
    v10 = 0LL;
    v6 = (_DWORD *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v12, a1);
    if ( v6 )
    {
      if ( a1 >= MmUserProbeAddress )
        v5 = (const void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v9, v5, 0x18uLL);
      if ( (v10 & 8) != 0 && (v6[30] & 0x10) != 0 )
        v6[4] |= 8u;
      if ( (v6[30] & 0x10) != 0 )
      {
        v7 = v6[4];
        if ( (v7 & 8) != 0 && (v6[4] = v7 & 0xFFFFFFF7, (v6[18] & 1) != 0) )
          v4 = v6[33];
        else
          v4 = v6[6];
      }
      else
      {
        v4 = -1;
      }
      *(_DWORD *)(a1 + 16) &= ~8u;
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v11);
    return v4;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v11);
    return 0LL;
  }
}
