/*
 * XREFs of ?moveElements@?$KArray@ULwfBindProperties@@$00@Rtl@@AEAAXKKK@Z @ 0x14014DB6C
 * Callers:
 *     ?insertAt@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z @ 0x14014DA88 (-insertAt@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z.c)
 * Callees:
 *     ??1LwfBindProperties@@QEAA@XZ @ 0x1400E60E4 (--1LwfBindProperties@@QEAA@XZ.c)
 */

void __fastcall Rtl::KArray<LwfBindProperties,1>::moveElements(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v8; // r12d
  unsigned int v9; // ebp
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // r12d
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned int v22; // esi
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  __int64 v27; // rbx

  if ( a2 != a3 && a4 )
  {
    if ( a2 >= a3 )
    {
      v17 = a3;
      v18 = a2 - a3;
      if ( a3 < a2 )
      {
        v19 = (unsigned __int64)a3 << 6;
        do
        {
          v20 = *(_QWORD *)(a1 + 8);
          v21 = (unsigned __int64)(v17 + v18) << 6;
          ++v17;
          *(_OWORD *)(v20 + v19) = *(_OWORD *)(v21 + v20);
          *(_DWORD *)(v20 + v19 + 16) = *(_DWORD *)(v21 + v20 + 16);
          v19 += 64LL;
          *(_DWORD *)(v20 + v19 - 44) = *(_DWORD *)(v21 + v20 + 20);
          *(_QWORD *)(v20 + v19 - 40) = *(_QWORD *)(v21 + v20 + 24);
          *(_QWORD *)(v21 + v20 + 24) = 0LL;
          *(_QWORD *)(v21 + v20 + 16) = 0LL;
          *(_DWORD *)(v20 + v19 - 32) = *(_DWORD *)(v21 + v20 + 32);
          *(_DWORD *)(v20 + v19 - 28) = *(_DWORD *)(v21 + v20 + 36);
          *(_QWORD *)(v20 + v19 - 24) = *(_QWORD *)(v21 + v20 + 40);
          *(_QWORD *)(v21 + v20 + 40) = 0LL;
          *(_QWORD *)(v21 + v20 + 32) = 0LL;
          *(_DWORD *)(v20 + v19 - 16) = *(_DWORD *)(v21 + v20 + 48);
          *(_BYTE *)(v20 + v19 - 12) = *(_BYTE *)(v21 + v20 + 52);
          *(_DWORD *)(v20 + v19 - 8) = *(_DWORD *)(v21 + v20 + 56);
        }
        while ( v17 < a2 );
      }
      v22 = a4 + a3;
      if ( v17 < v22 )
      {
        v23 = (unsigned __int64)v17 << 6;
        do
        {
          LwfBindProperties::~LwfBindProperties((LwfBindProperties *)(v23 + *(_QWORD *)(a1 + 8)));
          v24 = *(_QWORD *)(a1 + 8);
          v25 = (unsigned __int64)(v17 + v18) << 6;
          ++v17;
          *(_OWORD *)(v24 + v23) = *(_OWORD *)(v25 + v24);
          *(_DWORD *)(v24 + v23 + 16) = *(_DWORD *)(v25 + v24 + 16);
          *(_DWORD *)(v24 + v23 + 20) = *(_DWORD *)(v25 + v24 + 20);
          *(_QWORD *)(v24 + v23 + 24) = *(_QWORD *)(v25 + v24 + 24);
          *(_QWORD *)(v25 + v24 + 24) = 0LL;
          *(_QWORD *)(v25 + v24 + 16) = 0LL;
          *(_DWORD *)(v24 + v23 + 32) = *(_DWORD *)(v25 + v24 + 32);
          *(_DWORD *)(v24 + v23 + 36) = *(_DWORD *)(v25 + v24 + 36);
          *(_QWORD *)(v24 + v23 + 40) = *(_QWORD *)(v25 + v24 + 40);
          *(_QWORD *)(v25 + v24 + 40) = 0LL;
          *(_QWORD *)(v25 + v24 + 32) = 0LL;
          *(_DWORD *)(v24 + v23 + 48) = *(_DWORD *)(v25 + v24 + 48);
          *(_BYTE *)(v24 + v23 + 52) = *(_BYTE *)(v25 + v24 + 52);
          *(_DWORD *)(v24 + v23 + 56) = *(_DWORD *)(v25 + v24 + 56);
          v23 += 64LL;
        }
        while ( v17 < v22 );
      }
      if ( v17 < a2 + a4 )
      {
        v26 = (unsigned __int64)v17 << 6;
        v27 = a2 + a4 - v17;
        do
        {
          LwfBindProperties::~LwfBindProperties((LwfBindProperties *)(v26 + *(_QWORD *)(a1 + 8)));
          v26 += 64LL;
          --v27;
        }
        while ( v27 );
      }
    }
    else
    {
      v8 = a3 - a2;
      v9 = a3 + a4;
      while ( 1 )
      {
        v13 = v9 - 1;
        if ( (unsigned int)v13 < *(_DWORD *)(a1 + 4) )
          break;
        v10 = *(_QWORD *)(a1 + 8);
        v11 = v13 << 6;
        v12 = (unsigned __int64)(v9 - v8 - 1) << 6;
        --v9;
        *(_OWORD *)(v11 + v10) = *(_OWORD *)(v12 + v10);
        *(_DWORD *)(v11 + v10 + 16) = *(_DWORD *)(v12 + v10 + 16);
        *(_DWORD *)(v11 + v10 + 20) = *(_DWORD *)(v12 + v10 + 20);
        *(_QWORD *)(v11 + v10 + 24) = *(_QWORD *)(v12 + v10 + 24);
        *(_QWORD *)(v12 + v10 + 24) = 0LL;
        *(_QWORD *)(v12 + v10 + 16) = 0LL;
        *(_DWORD *)(v11 + v10 + 32) = *(_DWORD *)(v12 + v10 + 32);
        *(_DWORD *)(v11 + v10 + 36) = *(_DWORD *)(v12 + v10 + 36);
        *(_QWORD *)(v11 + v10 + 40) = *(_QWORD *)(v12 + v10 + 40);
        *(_QWORD *)(v12 + v10 + 40) = 0LL;
        *(_QWORD *)(v12 + v10 + 32) = 0LL;
        *(_DWORD *)(v11 + v10 + 48) = *(_DWORD *)(v12 + v10 + 48);
        *(_BYTE *)(v11 + v10 + 52) = *(_BYTE *)(v12 + v10 + 52);
        *(_DWORD *)(v11 + v10 + 56) = *(_DWORD *)(v12 + v10 + 56);
      }
      for ( ; v9 > a3; *(_DWORD *)(v15 + v14 + 56) = *(_DWORD *)(v16 + v15 + 56) )
      {
        v14 = (unsigned __int64)(v9 - 1) << 6;
        LwfBindProperties::~LwfBindProperties((LwfBindProperties *)(v14 + *(_QWORD *)(a1 + 8)));
        v15 = *(_QWORD *)(a1 + 8);
        v16 = v9 - v8 - 1;
        --v9;
        v16 <<= 6;
        *(_OWORD *)(v15 + v14) = *(_OWORD *)(v16 + v15);
        *(_DWORD *)(v15 + v14 + 16) = *(_DWORD *)(v16 + v15 + 16);
        *(_DWORD *)(v15 + v14 + 20) = *(_DWORD *)(v16 + v15 + 20);
        *(_QWORD *)(v15 + v14 + 24) = *(_QWORD *)(v16 + v15 + 24);
        *(_QWORD *)(v16 + v15 + 24) = 0LL;
        *(_QWORD *)(v16 + v15 + 16) = 0LL;
        *(_DWORD *)(v15 + v14 + 32) = *(_DWORD *)(v16 + v15 + 32);
        *(_DWORD *)(v15 + v14 + 36) = *(_DWORD *)(v16 + v15 + 36);
        *(_QWORD *)(v15 + v14 + 40) = *(_QWORD *)(v16 + v15 + 40);
        *(_QWORD *)(v16 + v15 + 40) = 0LL;
        *(_QWORD *)(v16 + v15 + 32) = 0LL;
        *(_DWORD *)(v15 + v14 + 48) = *(_DWORD *)(v16 + v15 + 48);
        *(_BYTE *)(v15 + v14 + 52) = *(_BYTE *)(v16 + v15 + 52);
      }
      while ( v9 > a2 )
        LwfBindProperties::~LwfBindProperties((LwfBindProperties *)(*(_QWORD *)(a1 + 8) + ((unsigned __int64)--v9 << 6)));
    }
  }
}
