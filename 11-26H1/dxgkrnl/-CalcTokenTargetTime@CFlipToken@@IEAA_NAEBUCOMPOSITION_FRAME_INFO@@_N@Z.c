/*
 * XREFs of ?CalcTokenTargetTime@CFlipToken@@IEAA_NAEBUCOMPOSITION_FRAME_INFO@@_N@Z @ 0x1400A2424
 * Callers:
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z @ 0x140067210 (-CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFlipToken::CalcTokenTargetTime(CFlipToken *this, const struct COMPOSITION_FRAME_INFO *a2, char a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v7; // r9
  _BYTE *v8; // r8
  const struct COMPOSITION_FRAME_INFO *v9; // rcx
  const struct COMPOSITION_FRAME_INFO *v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx

  v3 = *((_QWORD *)this + 14);
  if ( v3 )
    goto LABEL_17;
  v7 = *((_QWORD *)this + 4);
  v8 = (char *)this + 576;
  if ( a3 )
    goto LABEL_6;
  v9 = (const struct COMPOSITION_FRAME_INFO *)((char *)a2 + 96);
  if ( !*v8 )
    v9 = a2;
  if ( v7 <= *(_QWORD *)v9 )
  {
LABEL_6:
    v10 = (const struct COMPOSITION_FRAME_INFO *)((char *)a2 + 80);
    if ( !*v8 )
      v10 = a2;
    v11 = *(_QWORD *)v10;
    v12 = *(_QWORD *)((char *)a2 + (*v8 != 0 ? 0x48 : 0) + 16);
    if ( v7 > *(_QWORD *)v10 )
    {
      v15 = (v7 - v11) % v12;
      if ( a3 )
      {
        v3 = v12 - v15 + v7;
        goto LABEL_16;
      }
      v14 = 2 * v12 - v15;
    }
    else
    {
      v13 = (v11 - v7) % v12;
      if ( a3 )
      {
        v3 = v13 + v7;
        goto LABEL_16;
      }
      v14 = v12 + v13;
    }
    v3 = v7 + v14;
LABEL_16:
    *((_QWORD *)this + 14) = v3;
LABEL_17:
    LOBYTE(v3) = *((_QWORD *)a2 + 5) >= v3;
  }
  return v3;
}
