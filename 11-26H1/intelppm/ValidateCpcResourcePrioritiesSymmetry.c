/*
 * XREFs of ValidateCpcResourcePrioritiesSymmetry @ 0x140034FCC
 * Callers:
 *     ValidateCpcSymmetry @ 0x1400351D0 (ValidateCpcSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_SS @ 0x14000BC68 (WPP_RECORDER_SF_SS.c)
 *     WPP_RECORDER_SF_SSD @ 0x14000BE00 (WPP_RECORDER_SF_SSD.c)
 *     WPP_RECORDER_SF_SSDs @ 0x14000BFC4 (WPP_RECORDER_SF_SSDs.c)
 *     ValidateRegisterSymmetry @ 0x140035F70 (ValidateRegisterSymmetry.c)
 */

__int64 __fastcall ValidateCpcResourcePrioritiesSymmetry(
        const wchar_t *a1,
        unsigned int *a2,
        const wchar_t *a3,
        _DWORD *a4)
{
  unsigned int v4; // edi
  _DWORD *v5; // r12
  unsigned __int16 v9; // r9
  unsigned int i; // esi
  __int64 v12; // rcx
  unsigned int *v13; // r8
  _DWORD *v14; // rdx
  __int64 v15; // rax
  unsigned int *v16; // r10
  char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  signed __int64 v20; // r10
  __int64 v21; // r11
  int v22; // ecx
  __int64 *v23; // r14
  __int64 v24; // r12
  __int64 v25; // rdx
  int v26; // [rsp+20h] [rbp-58h]

  v4 = 0;
  v5 = a4;
  if ( !a2 )
  {
    if ( !a4 )
      return v4;
    goto LABEL_3;
  }
  if ( !a4 )
  {
LABEL_3:
    v4 = -1073741823;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 82;
LABEL_5:
      WPP_RECORDER_SF_SS((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, (__int64)a3, v9, v26, a1, a3);
      return v4;
    }
    return v4;
  }
  if ( *a2 != *a4 )
  {
    v4 = -1073741823;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v9 = 83;
    goto LABEL_5;
  }
  for ( i = 0; i < *a2; ++i )
  {
    v12 = 26LL * i;
    v13 = *(unsigned int **)&a2[v12 + 2];
    v14 = *(_DWORD **)&v5[v12 + 2];
    v15 = *v13;
    if ( (_DWORD)v15 == *v14 )
    {
      v16 = v13 + 1;
      v17 = (char *)(v14 + 1);
      v18 = 0LL;
      v19 = 0LL;
      if ( (_DWORD)v15 )
      {
        v20 = (char *)v16 - v17;
        v21 = v15;
        do
        {
          v22 = *(_DWORD *)v17;
          v18 = (1 << *(_DWORD *)&v17[v20]) | (unsigned int)v18;
          v17 += 4;
          v19 = (1 << v22) | (unsigned int)v19;
          --v21;
        }
        while ( v21 );
        if ( (_DWORD)v18 != (_DWORD)v19 )
        {
          v4 = -1073741823;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_SSD((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)v17, v18, 0x55u, v26, a1, a3);
        }
      }
      v23 = (__int64 *)&off_140012348;
      v24 = 4LL;
      do
      {
        if ( !(unsigned __int8)ValidateRegisterSymmetry(
                                 (char *)a2 + *((unsigned int *)v23 - 2),
                                 (char *)a2 + *((unsigned int *)v23 - 2),
                                 v18,
                                 v19) )
        {
          v4 = -1073741823;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_SSDs((__int64)WPP_GLOBAL_Control->DeviceExtension, v25, v18, v19, v26, a1, a3, i, *v23);
        }
        v23 += 3;
        --v24;
      }
      while ( v24 );
      v5 = a4;
    }
    else
    {
      v4 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_SSD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)v14,
          (__int64)v13,
          0x54u,
          v26,
          a1,
          a3);
    }
  }
  return v4;
}
