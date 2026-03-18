/*
 * XREFs of ?UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimationPlaybackState@@@Z @ 0x14012E750
 * Callers:
 *     ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140240B50 (-SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::UpdatePlaybackState(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  LARGE_INTEGER PerformanceCounter; // rax

  v2 = *(_DWORD *)(a1 + 296);
  v3 = 0;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( a2 == 2 )
      {
        *(LARGE_INTEGER *)(a1 + 208) = KeQueryPerformanceCounter(0LL);
        goto LABEL_7;
      }
    }
    else if ( a2 == 1 && v2 == 2 )
    {
      *(_QWORD *)(a1 + 200) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 208) = 0LL;
      goto LABEL_7;
    }
    if ( !a2 )
    {
      *(_QWORD *)(a1 + 200) = 0LL;
      *(_QWORD *)(a1 + 208) = 0LL;
      *(_QWORD *)(a1 + 216) = 0LL;
      *(_QWORD *)(a1 + 224) = 0LL;
      goto LABEL_7;
    }
  }
  else if ( a2 == 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(_BYTE *)(a1 + 320) &= ~2u;
    *(LARGE_INTEGER *)(a1 + 200) = PerformanceCounter;
    goto LABEL_7;
  }
  if ( v2 != a2 )
    return (unsigned int)-1073741811;
LABEL_7:
  *(_DWORD *)(a1 + 296) = a2;
  return v3;
}
