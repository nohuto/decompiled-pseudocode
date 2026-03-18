/*
 * XREFs of ?SetRemarshalingFlags@CInteractionTracker2Marshaler@DirectComposition@@UEAA_NXZ @ 0x140239570
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171A50 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CInteractionTracker2Marshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionTracker2Marshaler *this)
{
  _DWORD *v1; // rax
  int *v2; // rdx
  int *v3; // r8
  int v4; // eax
  int *v5; // rdx
  int v6; // eax
  int *v7; // r8
  int *v8; // rdx
  int v9; // eax
  int v10; // eax
  int *v11; // r8
  __int64 v12; // r9
  int *v13; // rax
  int *v14; // r8
  int *v15; // rdx
  int v16; // eax
  int *v17; // r8
  int *v18; // r9
  int *v19; // rdx
  int *v20; // r8
  __int64 v21; // r9
  int *v22; // rax
  unsigned int *v23; // rdx
  _DWORD *v24; // rax
  int *v25; // rdx
  int *v26; // r8
  int v27; // eax
  int *v28; // rdx
  int v29; // eax
  int *v30; // r8
  int v31; // eax
  int *v32; // rdx
  int v33; // eax
  int *v34; // r8
  int v35; // eax
  int *v36; // rdx
  int v37; // eax
  int *v38; // r8
  __int64 v39; // rdx

  v1 = (_DWORD *)((char *)this + 80);
  if ( *((_DWORD *)this + 22) )
    *v1 |= 1u;
  if ( *((_DWORD *)this + 23) )
    *v1 |= 2u;
  v2 = (int *)((char *)this + 80);
  if ( *((_DWORD *)this + 27) )
    *v1 |= 8u;
  else
    v2 = (int *)((char *)this + 80);
  if ( *((_DWORD *)this + 31) )
  {
    v3 = (int *)((char *)this + 80);
    *v2 = *v1 | 0x20;
  }
  else
  {
    v3 = v2;
  }
  if ( *((float *)this + 36) == 0.0 )
    v3 = v2;
  else
    *v2 |= 0x100u;
  if ( *((_DWORD *)this + 37) )
  {
    v4 = *v2;
    v5 = (int *)((char *)this + 80);
    *v3 = v4 | 0x200;
  }
  else
  {
    v5 = v3;
  }
  if ( *((float *)this + 38) == 0.0 )
    v5 = v3;
  else
    *v3 |= 0x400u;
  if ( *((_DWORD *)this + 39) )
  {
    v6 = *v3;
    v7 = (int *)((char *)this + 80);
    *v5 = v6 | 0x800;
  }
  else
  {
    v7 = v5;
  }
  if ( *((float *)this + 40) == 0.0 )
    v7 = v5;
  else
    *v5 |= 0x1000u;
  if ( *((float *)this + 41) == 0.0 )
  {
    v8 = v7;
  }
  else
  {
    v9 = *v5;
    v8 = (int *)((char *)this + 80);
    *v7 = v9 | 0x2000;
  }
  if ( *((float *)this + 42) == 0.0 )
    v8 = v7;
  else
    *v7 |= 0x4000u;
  if ( *((_DWORD *)this + 43) )
  {
    v10 = *v7;
    v11 = (int *)((char *)this + 80);
    *v8 = v10 | 0x8000;
  }
  else
  {
    v11 = v8;
  }
  v12 = *((_QWORD *)this + 22);
  v13 = v8;
  if ( v12 && *(_QWORD *)(v12 + 16) )
  {
    *v8 |= 0x10000u;
    v13 = v11;
  }
  if ( *((_DWORD *)this + 46) )
  {
    *v13 |= 0x20000u;
    v14 = (int *)((char *)this + 80);
  }
  else
  {
    v14 = v13;
  }
  if ( *((_DWORD *)this + 47) )
    *v13 |= 0x40000u;
  else
    v14 = v13;
  if ( *((float *)this + 48) == 0.0 )
  {
    v15 = v14;
  }
  else
  {
    v15 = (int *)((char *)this + 80);
    *v14 = *v13 | 0x80000;
  }
  if ( *((float *)this + 49) == 0.0 )
    v15 = v14;
  else
    *v14 |= 0x100000u;
  if ( *((_DWORD *)this + 50) )
  {
    v16 = *v14;
    v17 = (int *)((char *)this + 80);
    *v15 = v16 | 0x200000;
  }
  else
  {
    v17 = v15;
  }
  if ( *((_DWORD *)this + 51) )
    *v15 |= 0x400000u;
  else
    v17 = v15;
  if ( *((_DWORD *)this + 52) )
  {
    v18 = (int *)((char *)this + 80);
    *v17 = *v15 | 0x800000;
  }
  else
  {
    v18 = v17;
  }
  if ( *((float *)this + 53) == 0.0 )
    v18 = v17;
  else
    *v17 |= 0x1000000u;
  if ( *((float *)this + 54) == 0.0 )
  {
    v19 = v18;
  }
  else
  {
    v19 = (int *)((char *)this + 80);
    *v18 = *v17 | 0x2000000;
  }
  if ( *((_DWORD *)this + 55) )
    *v18 |= 0x4000000u;
  else
    v19 = v18;
  if ( *((_DWORD *)this + 56) )
  {
    v20 = (int *)((char *)this + 80);
    *v19 = *v18 | 0x8000000;
  }
  else
  {
    v20 = v19;
  }
  v21 = *((_QWORD *)this + 29);
  v22 = v19;
  if ( v21 && *(_QWORD *)(v21 + 16) )
  {
    *v19 |= 0x10000000u;
    v22 = v20;
  }
  if ( *((_DWORD *)this + 60) )
  {
    *v22 |= 0x20000000u;
    v23 = (unsigned int *)((char *)this + 80);
  }
  else
  {
    v23 = (unsigned int *)v22;
  }
  if ( *((_DWORD *)this + 61) )
    *v22 |= 0x40000000u;
  else
    v23 = (unsigned int *)v22;
  if ( *((float *)this + 62) != 0.0 )
    *v23 = *v22 | 0x80000000;
  v24 = (_DWORD *)((char *)this + 84);
  if ( *((float *)this + 63) != 0.0 )
    *((_DWORD *)this + 21) |= 1u;
  if ( *((float *)this + 64) != 0.0 )
    *v24 |= 2u;
  v25 = (int *)((char *)this + 84);
  if ( *((_DWORD *)this + 65) )
    *v24 |= 4u;
  else
    v25 = (int *)((char *)this + 84);
  if ( *((float *)this + 66) == 0.0 )
  {
    v26 = v25;
  }
  else
  {
    v26 = (int *)((char *)this + 84);
    *v25 = *v24 | 8;
  }
  if ( *((float *)this + 67) == 0.0 )
    v26 = v25;
  else
    *v25 |= 0x10u;
  if ( *((_DWORD *)this + 68) )
  {
    v27 = *v25;
    v28 = (int *)((char *)this + 84);
    *v26 = v27 | 0x20;
  }
  else
  {
    v28 = v26;
  }
  if ( *((_QWORD *)this + 35) )
    *v26 |= 0x40u;
  else
    v28 = v26;
  if ( *((_QWORD *)this + 36) )
  {
    v29 = *v26;
    v30 = (int *)((char *)this + 84);
    *v28 = v29 | 0x80;
  }
  else
  {
    v30 = v28;
  }
  if ( *((_QWORD *)this + 37) )
    *v28 |= 0x100u;
  else
    v30 = v28;
  if ( *((_DWORD *)this + 82) )
  {
    v31 = *v28;
    v32 = (int *)((char *)this + 84);
    *v30 = v31 | 0x200;
  }
  else
  {
    v32 = v30;
  }
  if ( *((_QWORD *)this + 42) )
    *v30 |= 0x400u;
  else
    v32 = v30;
  if ( *((_DWORD *)this + 92) )
  {
    v33 = *v30;
    v34 = (int *)((char *)this + 84);
    *v32 = v33 | 0x800;
  }
  else
  {
    v34 = v32;
  }
  if ( *((_QWORD *)this + 47) )
    *v32 |= 0x1000u;
  else
    v34 = v32;
  if ( *((_DWORD *)this + 102) )
  {
    v35 = *v32;
    v36 = (int *)((char *)this + 84);
    *v34 = v35 | 0x2000;
  }
  else
  {
    v36 = v34;
  }
  if ( *((_QWORD *)this + 52) )
    *v34 |= 0x4000u;
  else
    v36 = v34;
  if ( *((_DWORD *)this + 112) )
  {
    v37 = *v34;
    v38 = (int *)((char *)this + 84);
    *v36 = v37 | 0x8000;
  }
  else
  {
    v38 = v36;
  }
  if ( *((_DWORD *)this + 132) )
    *v36 |= 0x10000u;
  else
    v38 = v36;
  if ( *((_DWORD *)this + 140) )
    *v38 = *v36 | 0x20000;
  v39 = *((_QWORD *)this + 14) - 0x3F7333333F733333LL;
  if ( *((_QWORD *)this + 14) == 0x3F7333333F733333LL )
    v39 = *((unsigned int *)this + 30) - 1064514355LL;
  if ( v39 )
    *((_DWORD *)this + 20) |= 0x10u;
  *((_DWORD *)this + 4) &= ~0x20u;
  *((_DWORD *)this + 20) |= 0xC4u;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  return 1;
}
