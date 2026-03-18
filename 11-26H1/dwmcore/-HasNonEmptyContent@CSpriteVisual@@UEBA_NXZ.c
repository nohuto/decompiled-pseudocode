/*
 * XREFs of ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x180160710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSpriteVisual::HasNonEmptyContent(CSpriteVisual *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // r8
  __int64 *v4; // r9
  __int64 v6; // rax
  _BYTE *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rcx
  __int64 v12; // rax
  _BYTE *v13; // r10
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  char v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 31);
  if ( v2 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 224LL))(v2) )
    return 1;
  v3 = (_DWORD *)*((_QWORD *)this + 28);
  v4 = 0LL;
  if ( (*v3 & 0x80000) == 0 )
    goto LABEL_3;
  v12 = (unsigned int)v3[1];
  v13 = v3 + 2;
  v14 = 0LL;
  if ( (_DWORD)v12 )
  {
    while ( *v13 != 13 )
    {
      v14 = (unsigned int)(v14 + 1);
      ++v13;
      if ( (unsigned int)v14 >= (unsigned int)v12 )
        goto LABEL_26;
    }
    goto LABEL_22;
  }
LABEL_26:
  if ( (unsigned int)v14 < (unsigned int)v12 )
  {
LABEL_22:
    v15 = (unsigned __int64)&v3[2 * v14] + ((v12 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
    goto LABEL_23;
  }
  v15 = 0LL;
LABEL_23:
  if ( **(_QWORD **)v15 != *(_QWORD *)(*(_QWORD *)v15 + 8LL) )
    return 1;
LABEL_3:
  if ( (*v3 & 0x40000) == 0 )
    return 0;
  v6 = (unsigned int)v3[1];
  v7 = v3 + 2;
  v8 = 0LL;
  if ( (_DWORD)v6 )
  {
    while ( *v7 != 14 )
    {
      v8 = (unsigned int)(v8 + 1);
      ++v7;
      if ( (unsigned int)v8 >= (unsigned int)v6 )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    if ( (unsigned int)v8 >= (unsigned int)v6 )
      goto LABEL_10;
  }
  v4 = (__int64 *)((char *)&v3[2 * v8] + ((v6 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_10:
  v9 = *v4;
  v10 = 0;
  v16 = 0;
  if ( COERCE_FLOAT(*(_DWORD *)(v9 + 92) & _xmm) < 0.0000011920929 )
    return 0;
  if ( *(_DWORD *)(v9 + 124) != 1 )
  {
    v11 = *(_QWORD *)(v9 + 176);
    if ( v11 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v11 + 320LL))(v11, 0LL, &v16) )
        return 0;
      v10 = v16;
    }
    if ( v10 )
      return 0;
  }
  return 1;
}
