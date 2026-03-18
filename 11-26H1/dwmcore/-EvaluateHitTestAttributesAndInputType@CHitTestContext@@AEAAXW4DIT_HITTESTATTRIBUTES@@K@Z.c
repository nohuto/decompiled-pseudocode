/*
 * XREFs of ?EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z @ 0x180187524
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800944C4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHitTestContext::EvaluateHitTestAttributesAndInputType(__int64 a1, __int16 a2, int a3)
{
  int v3; // r9d
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // eax
  __int64 result; // rax
  int v10; // r8d
  int v11; // eax

  v3 = 0;
  if ( !a3 )
  {
LABEL_24:
    v8 = 0;
    goto LABEL_7;
  }
  v4 = a3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( !v7 )
        {
          v8 = 5;
          goto LABEL_7;
        }
        v10 = v7 - 1;
        if ( !v10 )
        {
          v8 = 3;
          goto LABEL_7;
        }
        if ( v10 != 1 )
          goto LABEL_24;
        v8 = 7;
      }
      else
      {
        v8 = 4;
      }
    }
    else
    {
      v8 = 2;
    }
  }
  else
  {
    v8 = 1;
  }
LABEL_7:
  *(_DWORD *)(a1 + 88) = v8;
  result = 0LL;
  *(_DWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 92) = 0LL;
  if ( (a2 & 1) == 0 )
    goto LABEL_8;
  *(_DWORD *)(a1 + 88) = 6;
  v11 = a2 & 2;
  if ( (a2 & 0x100) != 0 )
  {
    if ( (a2 & 4) == 0 )
    {
      result = v11 != 0 ? 16 : 32;
      goto LABEL_28;
    }
LABEL_35:
    result = 2 - (unsigned int)(v11 != 0);
    goto LABEL_28;
  }
  if ( (a2 & 4) != 0 )
    goto LABEL_35;
  result = v11 != 0 ? 4 : 8;
LABEL_28:
  *(_DWORD *)(a1 + 92) = result;
LABEL_8:
  if ( (a2 & 8) != 0 )
  {
    result = (unsigned int)result | 0x100;
    *(_DWORD *)(a1 + 92) = result;
  }
  if ( !(_DWORD)result )
    *(_DWORD *)(a1 + 92) = 1024;
  if ( (a2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 96) = 256;
    v3 = 256;
  }
  if ( (a2 & 0x80u) != 0 )
    *(_DWORD *)(a1 + 96) = v3 | 0x200;
  if ( (a2 & 0x10) != 0 )
    *(_DWORD *)(a1 + 216) |= 1u;
  if ( (a2 & 0x20) == 0 )
    *(_DWORD *)(a1 + 216) |= 2u;
  return result;
}
