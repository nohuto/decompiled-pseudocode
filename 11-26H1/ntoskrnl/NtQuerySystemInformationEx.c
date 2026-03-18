/*
 * XREFs of NtQuerySystemInformationEx @ 0x140833690
 * Callers:
 *     DifNtQuerySystemInformationExWrapper @ 0x140685ED0 (DifNtQuerySystemInformationExWrapper.c)
 * Callees:
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 */

__int64 __fastcall NtQuerySystemInformationEx(
        int a1,
        volatile void *a2,
        unsigned int a3,
        volatile void *Address,
        SIZE_T a5,
        __int64 a6)
{
  volatile void *v6; // r15
  SIZE_T v7; // rsi
  int v8; // r14d
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  ULONG v17; // r8d
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  char PreviousMode; // di
  SIZE_T Length; // [rsp+28h] [rbp-30h]

  v6 = Address;
  v7 = a3;
  v8 = (int)a2;
  if ( !a2 || !a3 )
    return 3221225485LL;
  if ( a1 > 180 )
  {
    if ( a1 > 231 )
    {
      v31 = a1 - 232;
      if ( !v31 )
        goto LABEL_43;
      v32 = v31 - 6;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( !v33 )
          goto LABEL_43;
        v34 = v33 - 1;
        if ( !v34 )
          goto LABEL_43;
        v35 = v34 - 9;
        if ( !v35 )
          goto LABEL_43;
        v36 = v35 - 5;
        if ( v36 )
        {
          if ( v36 == 2 )
            goto LABEL_43;
          return 3221225475LL;
        }
      }
    }
    else
    {
      if ( a1 == 231 )
        goto LABEL_43;
      v24 = a1 - 181;
      if ( v24 )
      {
        v25 = v24 - 13;
        if ( !v25 )
          goto LABEL_43;
        v26 = v25 - 15;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( !v27 )
            goto LABEL_43;
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 11;
            if ( !v29 )
              goto LABEL_43;
            v30 = v29 - 1;
            if ( v30 && v30 != 7 )
              return 3221225475LL;
          }
        }
      }
    }
LABEL_23:
    v17 = 8;
    goto LABEL_44;
  }
  if ( a1 == 180 )
    goto LABEL_43;
  if ( a1 > 107 )
  {
    v18 = a1 - 108;
    if ( !v18 )
      goto LABEL_15;
    v19 = v18 - 13;
    if ( !v19 )
      goto LABEL_15;
    v20 = v19 - 20;
    if ( !v20 )
      goto LABEL_15;
    v21 = v20 - 19;
    if ( !v21 )
      goto LABEL_15;
    v22 = v21 - 5;
    if ( !v22 )
      goto LABEL_23;
    v23 = v22 - 10;
    if ( !v23 || v23 == 3 )
      goto LABEL_23;
    return 3221225475LL;
  }
  if ( a1 == 107 )
    goto LABEL_43;
  v10 = a1 - 8;
  if ( !v10 )
    goto LABEL_15;
  v11 = v10 - 15;
  if ( !v11 )
    goto LABEL_15;
  v12 = v11 - 19;
  if ( !v12 )
    goto LABEL_15;
  v13 = v12 - 19;
  if ( !v13 )
    goto LABEL_15;
  v14 = v13 - 11;
  if ( !v14 )
  {
LABEL_43:
    v17 = 4;
    goto LABEL_44;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    v16 = v15 - 10;
    if ( v16 )
    {
      if ( v16 != 17 )
        return 3221225475LL;
    }
  }
LABEL_15:
  v17 = 2;
LABEL_44:
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    ProbeForRead(a2, v7, v17);
  LODWORD(Length) = a5;
  LOBYTE(Address) = PreviousMode;
  return ExpQuerySystemInformation(a1, v8, v7, (int)Address, v6, Length, a6);
}
