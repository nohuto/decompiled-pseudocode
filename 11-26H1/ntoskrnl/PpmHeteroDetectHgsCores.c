/*
 * XREFs of PpmHeteroDetectHgsCores @ 0x140516AD8
 * Callers:
 *     PpmHeteroReinitializeWpsProcessors @ 0x1407DA9A8 (PpmHeteroReinitializeWpsProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline @ 0x14060D2B8 (Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall PpmHeteroDetectHgsCores(__int64 a1)
{
  unsigned __int8 v1; // r13
  __int64 v2; // r14
  char v3; // di
  unsigned __int8 v4; // r15
  unsigned __int8 v5; // si
  unsigned __int8 v6; // bl
  unsigned __int8 v7; // cl
  __int64 v8; // rbx
  __int64 Prcb; // rax
  __int64 v10; // r9
  unsigned int v11; // edx
  char v12; // r8
  bool v13; // r10
  bool v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // r15d
  __int64 v18; // rsi
  char v19; // r12
  unsigned __int8 v20; // bl
  unsigned __int8 v21; // r14
  unsigned __int8 v22; // bl
  __int64 v23; // rax
  __int64 v24; // r15
  unsigned __int8 v25; // cl
  bool v26; // zf
  __int64 v27; // rdx
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // al
  __int64 v30; // rbx
  __int64 v31; // r10
  __int64 v32; // rcx
  _DWORD *v33; // r9
  __int64 v34; // rdx
  char v35; // r8
  struct _KAFFINITY_EX *v37; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-20h]
  __int16 v39; // [rsp+30h] [rbp-18h]
  int v40; // [rsp+32h] [rbp-16h]
  __int16 v41; // [rsp+36h] [rbp-12h]
  _DWORD *v43; // [rsp+98h] [rbp+50h]
  unsigned int v44; // [rsp+A0h] [rbp+58h] BYREF
  int v45; // [rsp+A8h] [rbp+60h]

  v1 = 0;
  v2 = a1;
  v3 = 0;
  v40 = 0;
  v41 = 0;
  v44 = 0;
  if ( !PpmHeteroHgsEnabled )
    return v3;
  v38 = PpmCheckRegistered.Bitmap[0];
  v37 = &PpmCheckRegistered;
  v3 = 1;
  v39 = 0;
  v4 = 0;
  v5 = -1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v44, (unsigned __int16 **)&v37) )
  {
    v6 = v5;
    v5 = *(_BYTE *)(KeGetPrcb(v44) + 35352);
    v7 = v5;
    if ( v5 <= v4 )
      v7 = v4;
    v4 = v7;
    if ( v5 >= v6 )
      v5 = v6;
  }
  if ( !PpmHeteroHgsPopulated )
  {
    if ( v4 != v5 )
    {
      v38 = PpmCheckRegistered.Bitmap[0];
      v39 = 0;
      v37 = &PpmCheckRegistered;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v44, (unsigned __int16 **)&v37) )
      {
        v8 = v44;
        Prcb = KeGetPrcb(v44);
        v10 = PpmHeteroCapability;
        v11 = 0;
        v12 = *(_BYTE *)(Prcb + 35352);
        *(_BYTE *)(v8 + *(_QWORD *)(v2 + 16)) = v12;
        if ( *(_DWORD *)(v10 + 4) )
        {
          v13 = v12 == (char)v5;
          v14 = v12 != (char)v5;
          do
          {
            v15 = v11;
            v16 = v11 + *(_DWORD *)(v2 + 4) * (_DWORD)v8;
            ++v11;
            *(_BYTE *)(v2 + 4 * v16 + 49) = v14;
            *(_BYTE *)(v2 + 4 * v16 + 48) = v13;
            *(_WORD *)(*(_QWORD *)(v2 + 24) + 2 * v15) = 257;
          }
          while ( v11 < *(_DWORD *)(v10 + 4) );
        }
      }
    }
    return v3;
  }
  v17 = 0;
  v45 = 0;
  if ( !*(_DWORD *)(v2 + 4) )
    return v3;
  do
  {
    v18 = v17;
    v39 = 0;
    v38 = PpmCheckRegistered.Bitmap[0];
    v19 = 1;
    v20 = 0;
    v37 = &PpmCheckRegistered;
    if ( (unsigned int)KeEnumerateNextProcessor(&v44, (unsigned __int16 **)&v37) )
      goto LABEL_40;
    v21 = 0;
    do
    {
      v22 = v1;
      v23 = KeGetPrcb(v44);
      v24 = *(_QWORD *)(v23 + 35424);
      v43 = *(_DWORD **)(v23 + 35456);
      v25 = *(_BYTE *)(v24 + 4 * v18 + 5);
      v1 = *(_BYTE *)(v24 + 4 * v18 + 4);
      if ( v25 <= v21 )
        v25 = v21;
      v21 = v25;
      if ( v1 <= v22 )
        v1 = v22;
      if ( PpmHeteroHgsParkingHintEnabled )
      {
        if ( !(unsigned int)Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( PpmHeteroHgsVendor == 2 )
          {
LABEL_26:
            if ( !*(_BYTE *)(v24 + 4 * v18 + 6) )
              continue;
            v26 = *(_BYTE *)(v24 + 4 * v18 + 7) == 0;
          }
          else
          {
            if ( PpmHeteroHgsVendor != 3 || *v43 == 2 )
              continue;
            v26 = *v43 == 1;
          }
          if ( !v26 )
            v19 = 0;
          continue;
        }
        if ( PpmHeteroHgsVendor == 2 )
          goto LABEL_26;
        if ( ((PpmHeteroHgsVendor - 1) & 0xFD) == 0 && *v43 != 2 && *v43 != 1 )
          v19 = 0;
      }
    }
    while ( !(unsigned int)KeEnumerateNextProcessor(&v44, (unsigned __int16 **)&v37) );
    v17 = v45;
    v20 = v21;
    v2 = a1;
LABEL_40:
    v27 = *(_QWORD *)(v2 + 24);
    v28 = *(_BYTE *)(v27 + 2 * v18);
    if ( v28 >= v20 )
      v28 = v20;
    v29 = *(_BYTE *)(v27 + 2 * v18 + 1);
    *(_BYTE *)(v27 + 2 * v18) = v28;
    if ( v29 >= v1 )
      v29 = v1;
    v1 = 0;
    *(_BYTE *)(v27 + 2 * v18 + 1) = v29;
    v38 = PpmCheckRegistered.Bitmap[0];
    v37 = &PpmCheckRegistered;
    v39 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v44, (unsigned __int16 **)&v37) )
    {
      v30 = v44;
      v31 = KeGetPrcb(v44);
      v32 = *(_QWORD *)(v31 + 35424);
      v33 = *(_DWORD **)(v31 + 35456);
      v34 = v17 + *(_DWORD *)(v2 + 4) * (_DWORD)v30;
      if ( PpmHeteroHgsEePerfHintsIndependentEnabled )
      {
        if ( !v19 )
        {
          v35 = PpmHeteroHgsVendor;
          if ( PpmHeteroHgsVendor == 2 && !*(_BYTE *)(v32 + 4 * v18 + 7) || *v33 == 2 || *v33 == 1 )
            *(_BYTE *)(v2 + 4 * v34 + 50) = 1;
          if ( v35 == 2 && !*(_BYTE *)(v32 + 4 * v18 + 6) || *v33 == 2 || *v33 == 1 )
            *(_BYTE *)(v2 + 4 * v34 + 51) = 1;
        }
      }
      else if ( !v19
             && (PpmHeteroHgsVendor == 2 && (!*(_BYTE *)(v32 + 4 * v18 + 7) || !*(_BYTE *)(v32 + 4 * v18 + 6))
              || *v33 == 2
              || *v33 == 1) )
      {
        *(_WORD *)(v2 + 4 * v34 + 50) = 257;
      }
      *(_BYTE *)(v2 + 4 * v34 + 49) = *(_BYTE *)(v32 + 4 * v18 + 4);
      *(_BYTE *)(v2 + 4 * v34 + 48) = *(_BYTE *)(v32 + 4 * v18 + 5);
      *(_BYTE *)(v30 + *(_QWORD *)(v2 + 16)) = *(_BYTE *)(v31 + 35352);
    }
    v45 = ++v17;
  }
  while ( v17 < *(_DWORD *)(v2 + 4) );
  return v3;
}
