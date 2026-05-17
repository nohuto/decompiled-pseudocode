/*
 * XREFs of RtlSwitchedVVI @ 0x180062B10
 * Callers:
 *     <none>
 * Callees:
 *     SwitchedRtlGetVersion @ 0x180062FA0 (SwitchedRtlGetVersion.c)
 *     RtlpVerCompare @ 0x180063D20 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x180063E90 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlSwitchedVVI(__int64 a1, int a2, __int64 a3)
{
  char v3; // di
  char v5; // bl
  __int64 result; // rax
  unsigned int v8; // ebp
  char v9; // cl
  __int64 v10; // rdi
  unsigned int v11; // eax
  char v12; // cl
  int v13; // edx
  bool v14; // al
  char v15; // al
  unsigned int v16; // eax
  char v17; // cl
  int v18; // esi
  int v19; // r10d
  unsigned int v20; // edx
  unsigned int v21; // r8d
  int v22; // r9d
  unsigned int v23; // eax
  char v24; // cl
  char v25; // al
  int v26; // eax
  int v27; // eax
  _BYTE v28[16]; // [rsp+30h] [rbp-158h] BYREF
  int v29; // [rsp+40h] [rbp-148h] BYREF
  _DWORD v30[68]; // [rsp+44h] [rbp-144h] BYREF
  unsigned __int16 v31; // [rsp+154h] [rbp-34h]
  unsigned __int16 v32; // [rsp+156h] [rbp-32h]
  unsigned __int16 v33; // [rsp+158h] [rbp-30h]
  unsigned __int8 v34; // [rsp+15Ah] [rbp-2Eh]

  v3 = 0;
  v5 = a2;
  if ( !a2 )
    return 3221225485LL;
  memset_thunk_772440563353939046(v30, 0, 0x118uLL);
  v29 = 284;
  result = SwitchedRtlGetVersion(&v29);
  if ( (_DWORD)result )
    return result;
  v8 = 0;
  if ( (v5 & 0x40) == 0 )
    goto LABEL_4;
  v19 = *(unsigned __int16 *)(a1 + 280);
  if ( !(_WORD)v19 )
    goto LABEL_4;
  v20 = 0;
  v21 = 64;
  while ( v20 < 0x10 )
  {
    v22 = 1 << v20;
    if ( (v19 & (1 << v20)) == 0 )
      goto LABEL_50;
    if ( a3 >= 0 )
      return 3221225485LL;
    v23 = 64;
    v24 = 0;
    do
    {
      v23 >>= 1;
      ++v24;
    }
    while ( v23 );
    if ( (((unsigned __int64)a3 >> (3 * v24 - 3)) & 7) == 6 )
    {
      if ( (v33 & (unsigned __int16)v22) == 0 )
        return 3221225561LL;
      goto LABEL_50;
    }
    if ( (((unsigned __int64)a3 >> (3 * v24 - 3)) & 7) != 7 )
      return 3221225485LL;
    if ( (v33 & (unsigned __int16)v22) != 0 )
    {
      v3 = 1;
      ++v20;
    }
    else
    {
LABEL_50:
      ++v20;
    }
  }
  v25 = 0;
  do
  {
    ++v25;
    v21 >>= 1;
  }
  while ( v21 );
  if ( (((unsigned __int64)a3 >> (3 * (v25 - 1))) & 7) == 7 && !v3 )
    return 3221225561LL;
LABEL_4:
  v9 = 1;
  LODWORD(v10) = 1;
  v28[0] = 1;
  if ( (v5 & 2) == 0 )
    goto LABEL_26;
  if ( a3 >= 0 )
  {
    LODWORD(v10) = (unsigned __int8)((unsigned __int64)a3 >> 4);
  }
  else
  {
    v11 = 2;
    v12 = 0;
    do
    {
      v11 >>= 1;
      ++v12;
    }
    while ( v11 );
    v10 = ((unsigned __int64)a3 >> (3 * v12 - 3)) & 7;
  }
  v13 = *(_DWORD *)(a1 + 4);
  v9 = v13 == v30[0];
  v28[0] = v13 == v30[0];
  if ( (_DWORD)v10 != 3 )
  {
    switch ( (_DWORD)v10 )
    {
      case 1:
        v14 = v30[0] == v13;
        break;
      case 2:
        v14 = v30[0] > v13;
        break;
      case 4:
        v14 = v30[0] < v13;
        break;
      case 5:
        v14 = v30[0] <= v13;
        break;
      default:
LABEL_16:
        if ( v13 != v30[0] )
          return 3221225561LL;
        goto LABEL_26;
    }
    if ( v14 )
      goto LABEL_20;
    goto LABEL_16;
  }
  if ( v30[0] < v13 )
    goto LABEL_16;
LABEL_20:
  if ( v13 != v30[0] )
  {
LABEL_21:
    if ( (v5 & 4) != 0 )
    {
      v26 = a3 >= 0 ? BYTE2(a3) : RtlpVerGetConditionMask(a3, 4LL);
      if ( !(unsigned __int8)RtlpVerCompare(v26, *(_DWORD *)(a1 + 12), v30[2], (unsigned int)v28, 0) )
        return 3221225561LL;
    }
    if ( (v5 & 8) != 0 )
    {
      v27 = a3 >= 0 ? 0 : RtlpVerGetConditionMask(a3, 8LL);
      if ( !(unsigned __int8)RtlpVerCompare(v27, *(_DWORD *)(a1 + 16), v30[3], (unsigned int)v28, 0) )
        return 3221225561LL;
    }
    if ( v5 >= 0 )
      return 0LL;
    if ( a3 >= 0 )
    {
      v18 = 0;
    }
    else
    {
      v16 = 128;
      v17 = 0;
      do
      {
        v16 >>= 1;
        ++v17;
      }
      while ( v16 );
      v18 = ((unsigned __int64)a3 >> (3 * v17 - 3)) & 7;
    }
    if ( !(unsigned __int8)RtlpVerCompare(v18, *(unsigned __int8 *)(a1 + 282), v34, (unsigned int)v28, 0) )
      return (unsigned int)-1073741735;
    return v8;
  }
LABEL_26:
  if ( (v5 & 1) == 0 )
    goto LABEL_29;
  if ( (_DWORD)v10 == 1 )
  {
    if ( a3 >= 0 )
      LODWORD(v10) = (unsigned __int8)((unsigned __int64)a3 >> 2);
    else
      LODWORD(v10) = RtlpVerGetConditionMask(a3, 1LL);
  }
  v15 = RtlpVerCompare(v10, *(_DWORD *)(a1 + 8), v30[1], (unsigned int)v28, 1);
  v9 = v28[0];
  if ( !v15 )
  {
    if ( !v28[0] )
      return 3221225561LL;
  }
  else
  {
LABEL_29:
    if ( !v9 )
      goto LABEL_21;
  }
  if ( (v5 & 0x20) != 0 )
  {
    if ( (_DWORD)v10 == 1 )
    {
      if ( a3 >= 0 )
        LODWORD(v10) = 0;
      else
        LODWORD(v10) = RtlpVerGetConditionMask(a3, 32LL);
    }
    if ( (unsigned __int8)RtlpVerCompare(v10, *(unsigned __int16 *)(a1 + 276), v31, (unsigned int)v28, 0) )
    {
      v9 = v28[0];
      goto LABEL_34;
    }
    if ( !v28[0] )
      return 3221225561LL;
  }
  else
  {
LABEL_34:
    if ( !v9 )
      goto LABEL_21;
  }
  if ( (v5 & 0x10) == 0 )
    goto LABEL_21;
  if ( (_DWORD)v10 == 1 )
  {
    if ( a3 >= 0 )
      LODWORD(v10) = 0;
    else
      LODWORD(v10) = RtlpVerGetConditionMask(a3, 16LL);
  }
  if ( (unsigned __int8)RtlpVerCompare(v10, *(unsigned __int16 *)(a1 + 278), v32, (unsigned int)v28, 1) )
    goto LABEL_21;
  return 3221225561LL;
}
