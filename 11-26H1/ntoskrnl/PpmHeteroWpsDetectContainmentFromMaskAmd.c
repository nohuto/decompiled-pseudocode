/*
 * XREFs of PpmHeteroWpsDetectContainmentFromMaskAmd @ 0x140C04230
 * Callers:
 *     <none>
 * Callees:
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     PpmEventWpsContainmentMaskDetection @ 0x140611F30 (PpmEventWpsContainmentMaskDetection.c)
 */

char __fastcall PpmHeteroWpsDetectContainmentFromMaskAmd(int a1)
{
  char v1; // bl
  int v2; // r15d
  int v3; // edi
  int v4; // r12d
  int v5; // r13d
  int v6; // eax
  char v7; // si
  char v8; // r14
  unsigned __int16 *v9; // r9
  int v10; // ecx
  __int64 Prcb; // rax
  int v12; // ecx
  char v13; // cl
  struct _KAFFINITY_EX *v15; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-18h]
  __int16 v17; // [rsp+30h] [rbp-10h]
  int v18; // [rsp+32h] [rbp-Eh]
  __int16 v19; // [rsp+36h] [rbp-Ah]
  unsigned int v21; // [rsp+88h] [rbp+48h] BYREF
  int v22; // [rsp+90h] [rbp+50h]

  v1 = 0;
  v18 = 0;
  v19 = 0;
  v2 = 0;
  v21 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = RtlCountSetBitsAffinityEx(&PpmCheckRegistered.Count);
  v7 = 0;
  v16 = PpmCheckRegistered.Bitmap[0];
  v8 = 0;
  v22 = v6;
  v17 = 0;
  v15 = (struct _KAFFINITY_EX *)v9;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v21, (unsigned __int16 **)&v15) )
  {
    v10 = *(_DWORD *)(KeGetPrcb(v21) + 35464);
    if ( (v10 & 0xFFFFFFFC) != 0 )
    {
      v3 = 6;
      goto LABEL_27;
    }
    if ( !v10 )
    {
      v3 = 1;
      goto LABEL_27;
    }
    if ( v10 == 3 )
    {
      v3 = 2;
      goto LABEL_27;
    }
    ++v5;
    if ( (v10 & 1) != 0 )
      v7 = 1;
    if ( (v10 & 2) != 0 )
      v8 = 1;
  }
  if ( v5 == v22 )
  {
    if ( v7 )
    {
      if ( v8 )
      {
        v16 = PpmCheckRegistered.Bitmap[0];
        v15 = &PpmCheckRegistered;
        v17 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v21, (unsigned __int16 **)&v15) )
        {
          Prcb = KeGetPrcb(v21);
          v12 = *(_DWORD *)(Prcb + 35464);
          if ( v12 == 1 )
          {
            ++v2;
            v13 = 0;
          }
          else
          {
            if ( v12 != 2 )
              goto LABEL_11;
            v13 = 1;
            ++v4;
          }
          *(_BYTE *)(Prcb + 35448) = v13;
        }
        v1 = 1;
      }
      else
      {
        v3 = 5;
      }
    }
    else
    {
      v3 = 4;
    }
  }
  else
  {
LABEL_11:
    v3 = 3;
  }
LABEL_27:
  dword_140F0F3E4 = v22;
  dword_140F0F3E8 = a1;
  PpmHeteroWpsContainmentMaskDetectionState = 1;
  byte_140F0F3E1 = v1;
  dword_140F0F3EC = v5;
  dword_140F0F3F0 = v2;
  dword_140F0F3F4 = v4;
  dword_140F0F3F8 = v3;
  PpmEventWpsContainmentMaskDetection((__int64)&PpmHeteroWpsContainmentMaskDetectionState, 0);
  return v1;
}
