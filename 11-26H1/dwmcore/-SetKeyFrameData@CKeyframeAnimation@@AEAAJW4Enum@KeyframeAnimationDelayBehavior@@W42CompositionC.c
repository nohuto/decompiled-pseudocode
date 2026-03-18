/*
 * XREFs of ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEBUKeyframeData@@@Z @ 0x18010F11C
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18010EAD0 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW45KeyframeAnimationDelayBehavior@@MW45KeyframeAnimationDirection@@MW45KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1D08 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EX.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1KeyframeSequence@@QEAA@XZ @ 0x18010F078 (--1KeyframeSequence@@QEAA@XZ.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18010F380 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ??2KeyframeSequence@@SAPEAX_K@Z @ 0x1801100EC (--2KeyframeSequence@@SAPEAX_K@Z.c)
 *     ??0KeyframeSequence@@QEAA@I@Z @ 0x18011011C (--0KeyframeSequence@@QEAA@I@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetKeyFrameData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  KeyframeSequence *v7; // rax
  __int64 v8; // r8
  KeyframeSequence *v9; // rsi
  int v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // edi
  float v13; // xmm6_4
  __int64 i; // rbp
  __int64 v15; // rcx
  int v16; // eax
  int v18; // edi
  int v19; // edi
  int v20; // edi

  if ( a2 > 1 )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x261u, 0LL);
    return v12;
  }
  *(_DWORD *)(a1 + 452) = a2;
  v7 = (KeyframeSequence *)KeyframeSequence::operator new(a1);
  if ( v7 )
    v7 = KeyframeSequence::KeyframeSequence(v7, *(_DWORD *)(a1 + 420));
  v9 = *(KeyframeSequence **)(a1 + 304);
  *(_QWORD *)(a1 + 304) = v7;
  if ( v9 )
  {
    KeyframeSequence::~KeyframeSequence(v9);
    operator delete(v9);
  }
  if ( *(_DWORD *)(a1 + 152) == 11 )
    goto LABEL_16;
  v10 = 6;
  switch ( *(_DWORD *)(a1 + 152) )
  {
    case 0x11:
      break;
    case 0x12:
    case 0x23:
    case 0x34:
    case 0x45:
LABEL_16:
      v10 = 0;
      break;
    case 0x46:
      if ( a3 && (v18 = a3 - 1) != 0 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            if ( v20 != 1 )
            {
              v11 = 1474;
              goto LABEL_15;
            }
            v10 = 3;
          }
          else
          {
            v10 = 5;
          }
        }
        else
        {
          v10 = 4;
        }
      }
      else
      {
        v10 = 2;
      }
      break;
    case 0x47:
      v10 = 1;
      break;
    default:
      v11 = 1484;
LABEL_15:
      v12 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, v11, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x26Eu, 0LL);
      return v12;
  }
  v12 = 0;
  v13 = 0.0;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(a1 + 420) )
    {
      *(_QWORD *)(a1 + 376) = 0LL;
      *(_QWORD *)(a1 + 384) = 0LL;
      *(_QWORD *)(a1 + 392) = 0LL;
      *(_QWORD *)(a1 + 400) = 0LL;
      *(_DWORD *)(a1 + 412) = 0;
      *(_QWORD *)(a1 + 444) = 0LL;
      return v12;
    }
    if ( (_DWORD)i )
    {
      v15 = (unsigned int)i;
      v13 = fmaxf(v13 + 0.001, *(float *)(a4 + 48 * i));
    }
    else
    {
      v13 = 0.0;
      v15 = 0LL;
    }
    v16 = CKeyframeAnimation::AddKeyframeData(a1, (unsigned int)i, v8, a4 + 48 * v15, v10);
    v12 = v16;
    if ( v16 < 0 )
      break;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x287u, 0LL);
  return v12;
}
