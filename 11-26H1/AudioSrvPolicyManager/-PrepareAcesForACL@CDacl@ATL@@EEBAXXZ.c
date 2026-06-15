/*
 * XREFs of ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x18001FEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180020180 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CDacl::PrepareAcesForACL(ATL::CDacl *this)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // r13
  _BYTE *v4; // rbx
  unsigned __int64 i; // rax
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rsi
  unsigned __int64 v8; // rsi
  __int64 j; // rax
  __int64 v10; // rdx
  _BYTE *v11; // r15
  char v12; // al
  char v13; // al
  _BYTE *v14; // rsi
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  unsigned __int128 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // r15
  __int64 *v20; // r12
  __int64 v21; // rax
  _BYTE v22[72]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+70h] [rbp+8h]

  v2 = 1LL;
  v3 = *((_QWORD *)this + 4);
  v4 = 0LL;
  if ( v3 <= 4 )
    goto LABEL_5;
  for ( i = 4LL; i < v3; i = 3 * i + 1 )
    v2 = i;
  if ( v2 )
  {
LABEL_5:
    while ( 1 )
    {
      v6 = v2 - 1;
      if ( v2 - 1 >= v3 )
        goto LABEL_29;
      do
      {
        if ( v6 >= *((_QWORD *)this + 4) )
LABEL_50:
          ATL::AtlThrowImpl(-2147024809);
        v7 = (_BYTE *)(*((_QWORD *)this + 3) + 8 * v6);
        if ( v4 == *(_BYTE **)v7 )
        {
          if ( v22 == v7 )
            goto LABEL_12;
        }
        else
        {
          if ( v4 )
            (**(void (__fastcall ***)(_BYTE *, __int64))v4)(v4, 1LL);
          v4 = *(_BYTE **)v7;
        }
        *(_QWORD *)v7 = 0LL;
LABEL_12:
        v8 = v6;
        if ( v6 < v2 )
          goto LABEL_22;
        for ( j = -8LL * v2; ; j = -8LL * v2 )
        {
          if ( v8 - v2 >= *((_QWORD *)this + 4) )
            goto LABEL_50;
          _mm_lfence();
          v10 = j + 8 * v8;
          v23 = v10;
          v11 = *(_BYTE **)(v10 + *((_QWORD *)this + 3));
          v12 = v4[132] & 0x10;
          if ( (v11[132] & 0x10) != 0 )
          {
            if ( !v12 )
              goto LABEL_33;
          }
          else if ( v12 )
          {
            goto LABEL_22;
          }
          v13 = v4[144];
          if ( !v11[144] )
            break;
          if ( v13 )
            goto LABEL_19;
LABEL_33:
          v17 = *((_QWORD *)this + 4);
          if ( v8 - v2 >= v17 )
            goto LABEL_50;
          v18 = *((_QWORD *)this + 3);
          v19 = (__int64 *)(v18 + v10);
          if ( v8 >= v17 )
            goto LABEL_50;
          v20 = (__int64 *)(v18 + 8 * v8);
          if ( *v20 == *v19 )
          {
            if ( v20 != v19 )
              *v19 = 0LL;
          }
          else
          {
            ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(v18 + 8 * v8);
            v21 = *v19;
            *v19 = 0LL;
            *v20 = v21;
          }
          v8 -= v2;
          if ( v8 < v2 )
            goto LABEL_22;
        }
        if ( v13 )
          goto LABEL_22;
LABEL_19:
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 32LL))(*(_QWORD *)(v10 + *((_QWORD *)this + 3)))
          && !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 32LL))(v4) )
        {
          v10 = v23;
          goto LABEL_33;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v11 + 32LL))(v11) )
          (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 32LL))(v4);
LABEL_22:
        if ( v8 >= *((_QWORD *)this + 4) )
          goto LABEL_50;
        v14 = (_BYTE *)(*((_QWORD *)this + 3) + 8 * v8);
        v15 = *(void (__fastcall ****)(_QWORD, __int64))v14;
        if ( *(_BYTE **)v14 == v4 )
        {
          if ( v14 != v22 )
            goto LABEL_27;
        }
        else
        {
          if ( v15 )
            (**v15)(v15, 1LL);
          *(_QWORD *)v14 = v4;
LABEL_27:
          v4 = 0LL;
        }
        ++v6;
      }
      while ( v6 < v3 );
LABEL_29:
      v16 = v2 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      v2 /= 3uLL;
      if ( !(*((_QWORD *)&v16 + 1) >> 1) )
      {
        if ( v4 )
          (**(void (__fastcall ***)(_BYTE *, __int64))v4)(v4, 1LL);
        return;
      }
    }
  }
}
