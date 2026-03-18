/*
 * XREFs of ?Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18020A320
 * Callers:
 *     ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180150174 (-Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CMit@@IEAAJXZ @ 0x1801DB424 (-Initialize@CMit@@IEAAJXZ.c)
 *     ??0CGlobalMit@@IEAA@PEAVCComposition@@@Z @ 0x18020A3C4 (--0CGlobalMit@@IEAA@PEAVCComposition@@@Z.c)
 *     ??_GCGlobalMit@@UEAAPEAXI@Z @ 0x180228610 (--_GCGlobalMit@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CGlobalMit::Create(struct CComposition *a1, struct CGlobalMit **a2)
{
  CGlobalMit *v4; // rax
  CMit *v5; // rax
  struct CGlobalMit *v6; // rbx
  int v7; // edi
  unsigned int v8; // eax

  v4 = (CGlobalMit *)MIDL_user_allocate(0x98uLL);
  if ( !v4 )
  {
    v6 = 0LL;
    goto LABEL_7;
  }
  v5 = CGlobalMit::CGlobalMit(v4, a1);
  v6 = v5;
  if ( !v5 )
  {
LABEL_7:
    v7 = -2147024882;
    v8 = 45;
    goto LABEL_8;
  }
  v7 = CMit::Initialize(v5);
  if ( v7 >= 0 )
  {
    *a2 = v6;
    return (unsigned int)v7;
  }
  v8 = 47;
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v8, 0LL);
  if ( v6 )
    CGlobalMit::`scalar deleting destructor'(v6, 1u);
  return (unsigned int)v7;
}
