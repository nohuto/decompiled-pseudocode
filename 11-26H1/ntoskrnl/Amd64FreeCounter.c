/*
 * XREFs of Amd64FreeCounter @ 0x1405A6504
 * Callers:
 *     Amd64DisableMonitoring @ 0x1405A6200 (Amd64DisableMonitoring.c)
 *     Amd64InitializeCacheStatus @ 0x1405A6754 (Amd64InitializeCacheStatus.c)
 *     Amd64InitializeDataFabricStatus @ 0x1405A68F8 (Amd64InitializeDataFabricStatus.c)
 *     Amd64InitializeProfiling @ 0x140BF5590 (Amd64InitializeProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Amd64FreeCounter(unsigned int a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // r11
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx

  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  v4 = a1;
  result = KiProcessorBlock[v2];
  v6 = *(_QWORD *)(result + 88);
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v6 += 24LL;
        break;
      case 100:
        v6 += 48LL;
        break;
      case 101:
        v6 += 72LL;
        break;
      default:
        v6 = 0LL;
        break;
    }
  }
  v7 = *(_QWORD *)(v6 + 16);
  v8 = 6LL * a1;
  *(_DWORD *)(v7 + 8 * v8 + 36) = 0;
  *(_DWORD *)(v7 + 8 * v8 + 24) = 3;
  if ( !a2 )
  {
    result = *(_QWORD *)(v7 + 48 * v4 + 16);
    if ( *(_BYTE *)(result + 8) )
    {
      *(_BYTE *)(result + 8) = 0;
      result = 6LL * (unsigned int)(v4 + 1);
      *(_DWORD *)(v7 + 8 * result + 36) = 0;
      *(_DWORD *)(v7 + 8 * result + 24) = 3;
    }
  }
  return result;
}
