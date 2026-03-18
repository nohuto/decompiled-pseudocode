/*
 * XREFs of MiPCheckMsgFilter @ 0x140101EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsMiPActive @ 0x140102234 (IsMiPActive.c)
 *     ?CheckMsgRange@@YAHIIII@Z @ 0x140102288 (-CheckMsgRange@@YAHIIII@Z.c)
 */

__int64 __fastcall MiPCheckMsgFilter(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // ebx
  struct tagTHREADINFO *v10; // rax
  int v11; // eax
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  bool v29; // cf
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  bool v35; // cf
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  unsigned int v40; // ebx

  v4 = 0;
  v7 = a2;
  if ( !a3 && a4 == -1 )
    return 1LL;
  if ( a3 <= a4 )
  {
    if ( (unsigned int)a2 < a3 || (unsigned int)a2 > a4 )
      goto LABEL_7;
    return 1LL;
  }
  if ( (unsigned int)a2 < a4 || (unsigned int)a2 > a3 )
    return 1LL;
LABEL_7:
  v10 = PtiCurrent(a1, a2);
  if ( !(unsigned int)IsMiPActive(v10, a1) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 100) & 0x400) == 0 )
    return 0LL;
  v11 = CheckMsgRange(0x245u, 0x257u, a3, a4);
  v16 = v15 - 22;
  if ( !v11 && !(unsigned int)CheckMsgRange(v16, 0x244u, v12, v13) )
    return 0LL;
  if ( v7 <= 0x200 )
  {
    if ( v7 != 512 )
    {
      if ( v7 > 0xA6 )
      {
        v17 = v7 - 167;
        if ( !v17 )
          goto LABEL_20;
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( !v19 )
            goto LABEL_20;
          v20 = v19 - 2;
          if ( !v20 )
            goto LABEL_20;
          v21 = v20 - 1;
          if ( v21 )
          {
LABEL_19:
            if ( v21 == 1 )
              goto LABEL_20;
            return 0LL;
          }
        }
LABEL_33:
        if ( !a3 && a4 == -1 )
          return 1;
        if ( a3 > a4 )
        {
          if ( a4 > 0x247 || a3 < 0x247 )
            return 1;
        }
        else if ( a4 >= 0x247 && a3 <= 0x247 )
        {
          return 1;
        }
        if ( !a3 && a4 == -1 )
          return 1;
        v22 = 579;
LABEL_39:
        if ( a3 <= a4 )
        {
          if ( a3 <= v22 && a4 >= v22 )
            return 1;
        }
        else if ( a4 > v22 || a3 < v22 )
        {
          return 1;
        }
        goto LABEL_74;
      }
      if ( v7 == 166 )
      {
LABEL_20:
        if ( !a3 && a4 == -1 )
          return 1;
        if ( a3 <= a4 )
        {
          if ( a3 <= 0x246 && a4 >= 0x246 )
            return 1;
        }
        else if ( a4 > 0x246 || a3 < 0x246 )
        {
          return 1;
        }
        if ( !a3 && a4 == -1 )
          return 1;
        v22 = 578;
        goto LABEL_39;
      }
      v30 = v7 - 160;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( !v33 )
              goto LABEL_20;
            v34 = v33 - 1;
            if ( !v34 )
              goto LABEL_20;
            if ( v34 != 1 )
              return 0LL;
          }
          goto LABEL_33;
        }
        goto LABEL_20;
      }
    }
LABEL_74:
    if ( !a3 && a4 == -1 )
      return 1;
    if ( a3 <= a4 )
    {
      if ( a3 <= v14 && a4 >= v14 )
        return 1;
    }
    else if ( a4 > v14 || a3 < v14 )
    {
      return 1;
    }
    if ( !a3 && a4 == -1 )
      return 1;
    if ( a3 > a4 )
    {
      if ( a4 <= v16 )
      {
        v29 = a3 < v16;
LABEL_53:
        if ( !v29 )
          return v4;
        return 1;
      }
      return 1;
    }
    if ( a3 > v16 )
      return v4;
    v35 = a4 < v16;
LABEL_89:
    if ( v35 )
      return v4;
    return 1;
  }
  if ( v7 <= 0x208 )
  {
    if ( v7 == 520 )
      goto LABEL_33;
    v36 = v7 - 513;
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( !v37 )
        goto LABEL_33;
      v38 = v37 - 1;
      if ( !v38 )
        goto LABEL_20;
      v39 = v38 - 1;
      if ( !v39 )
        goto LABEL_20;
      v40 = v39 - 1;
      if ( !v40 )
        goto LABEL_33;
      v21 = v40 - 1;
      if ( v21 )
        goto LABEL_19;
    }
    goto LABEL_20;
  }
  v23 = v7 - 521;
  if ( !v23 )
    goto LABEL_20;
  v24 = v23 - 1;
  if ( v24 )
  {
    v26 = v24 - 1;
    if ( !v26 )
      goto LABEL_20;
    v27 = v26 - 1;
    if ( !v27 )
      goto LABEL_33;
    v28 = v27 - 1;
    if ( !v28 )
      goto LABEL_20;
    if ( v28 != 1 )
      return 0LL;
    if ( !a3 && a4 == -1 )
      return 1;
    v25 = 591;
  }
  else
  {
    if ( !a3 && a4 == -1 )
      return 1;
    v25 = 590;
  }
  if ( a3 <= a4 )
  {
    if ( a3 > v25 )
      return v4;
    v35 = a4 < v25;
    goto LABEL_89;
  }
  if ( a4 <= v25 )
  {
    v29 = a3 < v25;
    goto LABEL_53;
  }
  return 1;
}
