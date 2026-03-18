/*
 * XREFs of MiPCheckMsgFilter @ 0x1400BED30
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsMiPActive @ 0x1400BF0AC (IsMiPActive.c)
 *     ?CheckMsgRange@@YAHIIII@Z @ 0x1400BF100 (-CheckMsgRange@@YAHIIII@Z.c)
 */

__int64 __fastcall MiPCheckMsgFilter(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // ebp
  struct tagTHREADINFO *v10; // rax
  int v11; // eax
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  unsigned int v29; // ebx
  bool v30; // cf
  int v31; // eax
  bool v32; // cf
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // eax
  unsigned int v45; // eax

  v8 = 1;
  if ( !a3 && a4 == -1 )
    return v8;
  if ( a3 > a4 )
  {
    if ( a2 < a4 || a2 > a3 )
      return v8;
  }
  else if ( a2 >= a3 && a2 <= a4 )
  {
    return v8;
  }
  v10 = PtiCurrent();
  if ( !(unsigned int)IsMiPActive(v10, a1) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 100) & 0x400) == 0 )
    return 0LL;
  v11 = CheckMsgRange(0x245u, 0x257u, a3, a4);
  v16 = v15 - 22;
  if ( !v11 && !(unsigned int)CheckMsgRange(v16, 0x244u, v12, v13) )
    return 0LL;
  if ( a2 > 0x200 )
  {
    if ( a2 <= 0x208 )
    {
      if ( a2 != 520 )
      {
        v33 = a2 - 513;
        if ( !v33 )
          goto LABEL_75;
        v34 = v33 - 1;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( !v35 )
            goto LABEL_75;
          v36 = v35 - 1;
          if ( !v36 )
            goto LABEL_75;
          v37 = v36 - 1;
          if ( v37 )
          {
            v29 = v37 - 1;
            if ( !v29 )
              goto LABEL_75;
            goto LABEL_74;
          }
        }
      }
LABEL_35:
      if ( !a3 && a4 == -1 )
        return v8;
      if ( a3 <= a4 )
      {
        if ( a3 <= 0x247 && a4 >= 0x247 )
          return v8;
      }
      else if ( a4 > 0x247 || a3 < 0x247 )
      {
        return v8;
      }
      if ( !a3 && a4 == -1 )
        return v8;
      v45 = 579;
      goto LABEL_99;
    }
    v39 = a2 - 521;
    if ( !v39 )
      goto LABEL_75;
    v40 = v39 - 1;
    if ( v40 )
    {
      v41 = v40 - 1;
      if ( !v41 )
        goto LABEL_75;
      v42 = v41 - 1;
      if ( !v42 )
        goto LABEL_35;
      v43 = v42 - 1;
      if ( !v43 )
        goto LABEL_75;
      if ( v43 != 1 )
        return 0LL;
      if ( !a3 && a4 == -1 )
        return v8;
      v44 = 591;
    }
    else
    {
      if ( !a3 && a4 == -1 )
        return v8;
      v44 = 590;
    }
    if ( a3 > a4 )
    {
      if ( a4 > v44 )
        goto LABEL_59;
      v30 = a3 < v44;
      goto LABEL_57;
    }
    if ( a3 <= v44 )
    {
      v32 = a4 < v44;
LABEL_64:
      if ( !v32 )
        return v8;
    }
    return 0;
  }
  if ( a2 == 512 )
    goto LABEL_16;
  if ( a2 > 0xA6 )
  {
    v25 = a2 - 167;
    if ( !v25 )
      goto LABEL_75;
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_35;
    v27 = v26 - 1;
    if ( !v27 )
      goto LABEL_75;
    v28 = v27 - 2;
    if ( !v28 )
      goto LABEL_75;
    v29 = v28 - 1;
    if ( !v29 )
      goto LABEL_35;
LABEL_74:
    if ( v29 != 1 )
      return 0LL;
LABEL_75:
    if ( !a3 && a4 == -1 )
      return v8;
    if ( a3 <= a4 )
    {
      if ( a3 <= 0x246 && a4 >= 0x246 )
        return v8;
    }
    else if ( a4 > 0x246 || a3 < 0x246 )
    {
      return v8;
    }
    if ( !a3 && a4 == -1 )
      return v8;
    v45 = 578;
LABEL_99:
    if ( a3 <= a4 )
    {
      if ( a3 <= v45 && a4 >= v45 )
        return v8;
    }
    else if ( a4 > v45 || a3 < v45 )
    {
      return v8;
    }
LABEL_16:
    if ( !a3 && a4 == -1 )
      return v8;
    if ( a3 <= a4 )
    {
      if ( a3 <= v14 && a4 >= v14 )
        return v8;
    }
    else if ( a4 > v14 || a3 < v14 )
    {
      return v8;
    }
    if ( !a3 && a4 == -1 )
      return v8;
    if ( a3 > a4 )
    {
      if ( a4 > v16 )
        goto LABEL_59;
      v30 = a3 < v16;
LABEL_57:
      if ( !v30 )
      {
        v31 = 0;
        goto LABEL_60;
      }
LABEL_59:
      v31 = 1;
LABEL_60:
      if ( !v31 )
        return 0;
      return v8;
    }
    if ( a3 <= v16 )
    {
      v32 = a4 < v16;
      goto LABEL_64;
    }
    return 0;
  }
  if ( a2 == 166 )
    goto LABEL_75;
  v17 = a2 - 160;
  if ( !v17 )
    goto LABEL_16;
  v20 = v17 - 1;
  if ( !v20 )
    goto LABEL_75;
  v21 = v20 - 1;
  if ( !v21 )
    goto LABEL_35;
  v22 = v21 - 1;
  if ( !v22 )
    goto LABEL_75;
  v23 = v22 - 1;
  if ( !v23 )
    goto LABEL_75;
  if ( v23 == 1 )
    goto LABEL_35;
  return 0LL;
}
