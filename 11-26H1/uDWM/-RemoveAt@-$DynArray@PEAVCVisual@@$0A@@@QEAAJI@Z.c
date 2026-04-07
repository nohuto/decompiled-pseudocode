/*
 * XREFs of ?RemoveAt@?$DynArray@PEAVCVisual@@$0A@@@QEAAJI@Z @ 0x18004D2D0
 * Callers:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18008C6A0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CVisual *,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 i; // r10
  __int64 v4; // r8
  __int64 result; // rax

  v2 = *((_DWORD *)a1 + 6);
  if ( a2 >= v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x19Au, 0LL);
    return 2147942487LL;
  }
  else
  {
    for ( i = *a1; a2 < v2 - 1; v2 = *((_DWORD *)a1 + 6) )
    {
      v4 = a2++;
      *(_QWORD *)(i + 8 * v4) = *(_QWORD *)(i + 8LL * a2);
    }
    result = 0LL;
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  return result;
}
