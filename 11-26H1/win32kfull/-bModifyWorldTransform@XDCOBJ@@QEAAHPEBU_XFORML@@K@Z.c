/*
 * XREFs of ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x140108080
 * Callers:
 *     NtGdiModifyWorldTransform @ 0x140107FB0 (NtGdiModifyWorldTransform.c)
 * Callees:
 *     ?bWorldXformIdentity@@YAHPEBU_XFORML@@@Z @ 0x14010832C (-bWorldXformIdentity@@YAHPEBU_XFORML@@@Z.c)
 *     ?bWorldMatrixInRange@@YAHPEAUMATRIX@@@Z @ 0x140108730 (-bWorldMatrixInRange@@YAHPEAUMATRIX@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 */

__int64 __fastcall XDCOBJ::bModifyWorldTransform(XDCOBJ *this, const struct _XFORML *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  const struct MATRIX *v19; // rdx
  const struct MATRIX *v20; // r8
  __int128 *p_Buf1; // [rsp+20h] [rbp-29h] BYREF
  const struct MATRIX *v22; // [rsp+28h] [rbp-21h] BYREF
  __int128 Buf1; // [rsp+30h] [rbp-19h] BYREF
  __int128 v24; // [rsp+40h] [rbp-9h]
  int v25; // [rsp+50h] [rbp+7h]
  _OWORD v26[2]; // [rsp+58h] [rbp+Fh] BYREF
  int v27; // [rsp+78h] [rbp+2Fh]

  v25 = 0;
  v3 = 0;
  Buf1 = 0LL;
  v24 = 0LL;
  switch ( a3 )
  {
    case 1:
      goto LABEL_6;
    case 2:
    case 3:
      vConvertXformToMatrix(a2, &Buf1);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 340LL) & 2) != 0 )
        goto LABEL_26;
      DC::QuickInitXform(*(_QWORD *)this, &v22, 515LL);
      v19 = v22;
      if ( v22 )
      {
        v27 = v25;
        p_Buf1 = &Buf1;
        v26[0] = Buf1;
        v26[1] = v24;
        if ( a3 == 2 )
        {
          v20 = v22;
          v19 = (const struct MATRIX *)v26;
        }
        else
        {
          v20 = (const struct MATRIX *)v26;
        }
        if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&p_Buf1, v19, v20, 0) )
        {
LABEL_26:
          if ( (unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
          {
            v15 = *(_QWORD *)this;
            *(_OWORD *)(v15 + 392) = Buf1;
            *(_OWORD *)(v15 + 408) = v24;
            v16 = *(_QWORD *)(*(_QWORD *)this + 976LL);
            *(_OWORD *)(v16 + 356) = Buf1;
            *(_OWORD *)(v16 + 372) = v24;
            v17 = memcmp(&Buf1, &xmmword_140360A48, 0x20uLL);
            v18 = *(_QWORD *)this;
            v9 = *(_QWORD *)(*(_QWORD *)this + 976LL);
            if ( !v17 )
              goto LABEL_8;
            *(_DWORD *)(v9 + 340) |= 0x80B0u;
            v14 = *(_QWORD *)(v18 + 976);
            goto LABEL_13;
          }
        }
      }
      break;
    case 4:
      if ( (unsigned int)bWorldXformIdentity(a2) )
      {
LABEL_6:
        v7 = *(_QWORD *)this;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 340LL) & 2) != 0 )
          return 1;
        *(_OWORD *)(v7 + 392) = xmmword_140360A48;
        *(_OWORD *)(v7 + 408) = xmmword_140360A58;
        v8 = *(_QWORD *)(*(_QWORD *)this + 976LL);
        *(_OWORD *)(v8 + 356) = xmmword_140360A48;
        *(_OWORD *)(v8 + 372) = xmmword_140360A58;
        v9 = *(_QWORD *)(*(_QWORD *)this + 976LL);
LABEL_8:
        *(_DWORD *)(v9 + 340) |= 0x80B2u;
        return 1;
      }
      vConvertXformToMatrix(v6, &Buf1);
      if ( !(unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
        return v3;
      v11 = *(_QWORD *)this;
      *(_OWORD *)(v11 + 392) = Buf1;
      *(_OWORD *)(v11 + 408) = v24;
      v12 = *(_QWORD *)(*(_QWORD *)this + 976LL);
      *(_OWORD *)(v12 + 356) = Buf1;
      *(_OWORD *)(v12 + 372) = v24;
      v13 = *(_QWORD *)this;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 340LL) |= 0x80B0u;
      v14 = *(_QWORD *)(v13 + 976);
LABEL_13:
      *(_DWORD *)(v14 + 340) &= ~2u;
      return 1;
  }
  return v3;
}
