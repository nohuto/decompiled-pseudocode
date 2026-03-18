/*
 * XREFs of ?vStripStyledVerticalCddCallback@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1401D76B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall vStripStyledVerticalCddCallback(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  __int64 v4; // rbp
  unsigned int v5; // r11d
  int v7; // esi
  int v8; // edi
  int v9; // r9d
  int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // ett
  unsigned int v13; // r15d
  void (__fastcall *v14)(_QWORD, _QWORD, _QWORD); // r10
  int v15; // r13d
  __int64 v16; // rax
  int v17; // r12d
  __int64 v18; // rcx
  _DWORD *v19; // rax
  _DWORD *v20; // rax
  unsigned int v21; // [rsp+20h] [rbp-88h]
  int v22; // [rsp+24h] [rbp-84h]
  __int64 v23; // [rsp+28h] [rbp-80h]
  char *v24; // [rsp+30h] [rbp-78h]
  void (__fastcall *v26)(_QWORD, _QWORD, _QWORD); // [rsp+40h] [rbp-68h]
  char *v27; // [rsp+48h] [rbp-60h]
  _DWORD v28[4]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (char *)a1 + 28;
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 20);
  v8 = *((_DWORD *)a3 + 5);
  v27 = (char *)a1 + 4 * *(int *)a1 + 28;
  v9 = -4 * *((_DWORD *)a1 + 2);
  v10 = 1;
  v24 = (char *)a1 + 28;
  if ( (*((_BYTE *)a1 + 4) & 8) == 0 )
    v9 = 4 * *((_DWORD *)a1 + 2);
  v21 = *((_DWORD *)a3 + 1);
  if ( v9 <= 0 )
    v10 = -1;
  v11 = -v9;
  v22 = v10;
  if ( v9 > 0 )
    v11 = v9;
  v12 = v4 - *((_DWORD *)a1 + 110);
  v13 = (v12 % v11) >> 2;
  v14 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v15 = v12 / v11;
  v26 = v14;
  v16 = v9;
  v23 = v9;
  do
  {
    v17 = *(_DWORD *)v3;
    do
    {
      if ( !v7 )
      {
        v18 = *((_QWORD *)a1 + 54);
        v28[2] = v13 + 1;
        v28[0] = v13;
        v28[3] = v15 + 1;
        v28[1] = v15;
        v14(v18, v5, v28);
        v16 = v23;
        v5 = v21;
        v14 = v26;
      }
      v15 += v22;
      v4 += v16;
      v8 -= *((_DWORD *)a3 + 2);
      if ( v8 <= 0 )
      {
        v19 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
        *((_QWORD *)a3 + 7) = v19;
        if ( (unsigned __int64)v19 > *((_QWORD *)a3 + 6) )
        {
          v19 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v19;
        }
        v8 += *v19;
        v7 = v7 == 0;
        v16 = v23;
      }
      --v17;
    }
    while ( v17 );
    v8 -= *((_DWORD *)a3 + 3);
    v4 += 4LL;
    ++v13;
    if ( v8 <= 0 )
    {
      v20 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v20;
      if ( (unsigned __int64)v20 > *((_QWORD *)a3 + 6) )
      {
        v20 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v20;
      }
      v8 += *v20;
      v7 = v7 == 0;
    }
    v16 = v23;
    v3 = v24 + 4;
    v24 = v3;
  }
  while ( v3 < v27 );
  *((_QWORD *)a1 + 2) = v4;
  *((_DWORD *)a3 + 20) = v7;
  *((_DWORD *)a3 + 5) = v8;
}
