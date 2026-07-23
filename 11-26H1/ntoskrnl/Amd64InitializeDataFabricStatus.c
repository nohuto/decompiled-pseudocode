/*
 * XREFs of Amd64InitializeDataFabricStatus @ 0x1405A68F8
 * Callers:
 *     Amd64InitializeUncoreProfiling @ 0x1405A6A20 (Amd64InitializeUncoreProfiling.c)
 * Callees:
 *     Amd64FreeCounter @ 0x1405A6504 (Amd64FreeCounter.c)
 *     Amd64InitializeUncoreStatus @ 0x1405A6B28 (Amd64InitializeUncoreStatus.c)
 */

__int64 __fastcall Amd64InitializeDataFabricStatus()
{
  __int64 v0; // rax
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax

  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v1 = (unsigned int)v0;
  result = KiProcessorBlock[v0];
  v3 = *(_QWORD *)(result + 88);
  v4 = *(unsigned int *)(v3 + 52);
  if ( (_DWORD)v4 )
  {
    _RAX = 2147483678LL;
    __asm { cpuid }
    v10 = 0LL;
    result = *(_QWORD *)(Amd64InitializeUncoreStatus(1LL, &qword_140F87960, (unsigned __int8)_RCX, v4) + 24);
    *(_QWORD *)(v3 + 64) = result;
    if ( *(_DWORD *)(v3 + 52) )
    {
      while ( 1 )
      {
        LODWORD(v11) = 0;
        *(_DWORD *)(*(_QWORD *)(v3 + 64) + 48 * v10 + 28) = 100;
        if ( *(_DWORD *)(v3 + 48) == 1 )
          goto LABEL_11;
        if ( *(_DWORD *)(v3 + 48) == 100 )
          goto LABEL_8;
        if ( *(_DWORD *)(v3 + 48) == 101 )
          break;
LABEL_14:
        __writemsr(*((_DWORD *)&xmmword_140F879E0 + (unsigned int)(v11 + v10)), 0LL);
        result = Amd64FreeCounter(v10, *(_DWORD *)(v3 + 48));
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= *(_DWORD *)(v3 + 52) )
          return result;
      }
      v11 = *(_QWORD *)(KiProcessorBlock[v1] + 88) + 48LL;
      if ( *(_QWORD *)(KiProcessorBlock[v1] + 88) != -48LL )
        LODWORD(v11) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v1] + 88) + 52LL);
LABEL_8:
      v12 = *(_QWORD *)(KiProcessorBlock[v1] + 88) + 24LL;
      if ( *(_QWORD *)(KiProcessorBlock[v1] + 88) != -24LL )
        LODWORD(v12) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v1] + 88) + 28LL);
      LODWORD(v11) = v12 + v11;
LABEL_11:
      v13 = *(_QWORD *)(KiProcessorBlock[v1] + 88);
      if ( v13 )
        LODWORD(v13) = *(_DWORD *)(v13 + 4);
      LODWORD(v11) = v13 + v11;
      goto LABEL_14;
    }
  }
  return result;
}
