/*
 * XREFs of ?ResetHomeState@MPCSixDofProcessor@@AEAAXXZ @ 0x1801C15E8
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024E38 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCSixDofProcessor::ResetHomeState(MPCSixDofProcessor *this)
{
  __int64 v1; // rax

  *((_DWORD *)this + 1073) = 0;
  *((_WORD *)this + 2148) = 0;
  *(_QWORD *)((char *)this + 4356) = 0LL;
  *((_DWORD *)this + 1091) = 0;
  *((_BYTE *)this + 10808) = 0;
  v1 = *((_QWORD *)this + 1352);
  if ( v1 != *((_QWORD *)this + 1353) )
    *((_QWORD *)this + 1353) = v1;
}
