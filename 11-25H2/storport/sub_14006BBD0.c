/*
 * XREFs of sub_14006BBD0 @ 0x14006BBD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_14010EA34 @ 0x14010EA34 (sub_14010EA34.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14006BBD0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  _DWORD *v5; // rcx
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int *v9; // rax
  __int64 v10; // rcx
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r15
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // r14
  char v17; // si
  unsigned __int8 v18; // r11
  char *v19; // r11
  char v20; // r13
  unsigned int v21; // r12d
  unsigned int *v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rcx
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned int *v34; // rax
  const EVENT_DESCRIPTOR *v35; // rdx
  unsigned __int64 v36; // rdx
  char v37; // r15
  _BYTE *v38; // r9
  unsigned __int8 v39; // r10
  char v40; // r14
  char v41; // si
  char v42; // r11
  char *v43; // r11
  char v44; // r13
  unsigned int v45; // r12d
  unsigned int *v46; // r15
  __int64 v47; // rax
  unsigned __int64 v48; // rsi
  char v49; // cl
  char v50; // r8
  _BYTE *v51; // rax
  unsigned int v52; // eax
  char v53; // al
  __int64 v55; // [rsp+20h] [rbp-49h]
  __int64 v56; // [rsp+28h] [rbp-41h]
  char v57; // [rsp+60h] [rbp-9h]
  char v58; // [rsp+60h] [rbp-9h]
  unsigned __int8 v59; // [rsp+61h] [rbp-8h]
  char v60; // [rsp+61h] [rbp-8h]
  char v61; // [rsp+62h] [rbp-7h]
  char v62; // [rsp+62h] [rbp-7h]
  unsigned int v64; // [rsp+70h] [rbp+7h]
  unsigned int v65; // [rsp+70h] [rbp+7h]
  GUID v66; // [rsp+78h] [rbp+Fh] BYREF

  v3 = a1;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 8) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0((__int64)off_140168120->AttachedDevice, 0x18u, (__int64)&unk_140148948, a1, a2);
  }
  v4 = 0;
  *(_BYTE *)(a2 + 141) = -88;
  *(_QWORD *)(a2 + 56) = 0LL;
  v5 = *(_DWORD **)(v3 + 64);
  if ( *v5 == 1314275652 )
  {
    v6 = byte_140168DAA == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741823;
    if ( v6 )
      goto LABEL_144;
    v66 = 0LL;
    IoGetActivityIdIrp(a2, &v66);
    v33 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v33 == 14 )
    {
      if ( (byte_1401694F2 & 8) == 0 )
        goto LABEL_144;
      v35 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
      goto LABEL_90;
    }
    if ( *(_BYTE *)v33 != 15 )
    {
      if ( *(_BYTE *)v33 == 27 )
      {
        if ( *(_BYTE *)(v33 + 1) == 7 && !*(_DWORD *)(v33 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v34 = *(unsigned int **)(a2 + 56);
            if ( v34 )
              v4 = *v34;
            LODWORD(v55) = v4;
            sub_140056AB0(v32, v33, &v66, a2, v55, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_144;
        }
        if ( (byte_1401694F2 & 0x20) != 0 )
        {
          v35 = &stru_140149FE8;
LABEL_90:
          LODWORD(v55) = *(_DWORD *)(a2 + 48);
          sub_140052F3C(v32, v35, &v66, a2, v55);
        }
      }
LABEL_144:
      IofCompleteRequest((PIRP)a2, 0);
      v4 = -1073741823;
      goto LABEL_145;
    }
    if ( byte_1401694F1 >= 0 )
      goto LABEL_144;
    v36 = *(_QWORD *)(v33 + 8);
    v37 = 0;
    v62 = 0;
    v38 = 0LL;
    v39 = 0;
    v58 = 0;
    v40 = 0;
    v60 = 0;
    v41 = 0;
    v42 = 0;
    if ( *(_BYTE *)(v36 + 2) == 40 )
    {
      v43 = 0LL;
      v44 = 0;
      if ( *(_DWORD *)(v36 + 20) )
        goto LABEL_143;
      v45 = 0;
      v65 = *(_DWORD *)(v36 + 56);
      if ( v65 )
      {
        v46 = (unsigned int *)(v36 + 120);
        do
        {
          v47 = *v46;
          if ( (unsigned int)v47 >= 0x80 )
          {
            v48 = *(unsigned int *)(v36 + 16);
            if ( (unsigned int)v47 < (unsigned int)v48 )
            {
              if ( *(_DWORD *)(v47 + v36) == 64 )
              {
                v32 = v47 + 40;
                if ( v47 + 40 <= v48 )
                {
                  if ( *(_BYTE *)(v47 + v36 + 10) )
                    v43 = (char *)((unsigned int)v47 + v36 + 24);
                  v38 = *(_BYTE **)(v47 + v36 + 16);
                  goto LABEL_105;
                }
              }
              else
              {
                v32 = (unsigned int)(*(_DWORD *)(v47 + v36) - 65);
                if ( *(_DWORD *)(v47 + v36) == 65 )
                {
                  v32 = v47 + 56;
                  if ( v47 + 56 <= v48 )
                  {
                    v44 = 1;
                    if ( *(_BYTE *)(v47 + v36 + 10) )
                      v43 = (char *)((unsigned int)v47 + v36 + 24);
                    v38 = *(_BYTE **)((unsigned int)v47 + v36 + 16);
                    v39 = *(_BYTE *)((unsigned int)v47 + v36 + 9);
                    v62 = *(_BYTE *)(v47 + v36 + 8);
                  }
                }
                else if ( *(_DWORD *)(v47 + v36) == 66 )
                {
                  v32 = v47 + 40;
                  if ( v47 + 40 <= v48 )
                  {
                    if ( *(_DWORD *)(v47 + v36 + 12) )
                      v43 = (char *)(v47 + v36 + 32);
                    v38 = *(_BYTE **)(v47 + v36 + 24);
LABEL_105:
                    v37 = *(_BYTE *)(v47 + v36 + 8);
                    v39 = *(_BYTE *)(v47 + v36 + 9);
                    goto LABEL_114;
                  }
                }
              }
              if ( v44 )
                break;
            }
          }
          ++v45;
          ++v46;
        }
        while ( v45 < v65 );
        v37 = v62;
LABEL_114:
        v41 = 0;
      }
      if ( !v43 )
        goto LABEL_143;
      v49 = *v43;
      v42 = 0;
    }
    else
    {
      v49 = *(_BYTE *)(v36 + 72);
      v38 = *(_BYTE **)(v36 + 32);
      v39 = *(_BYTE *)(v36 + 11);
      v37 = *(_BYTE *)(v36 + 4);
      if ( *(_BYTE *)(v36 + 2) )
      {
LABEL_143:
        v3 = a1;
        goto LABEL_144;
      }
    }
    LOBYTE(v32) = v49 - 8;
    if ( (v32 & 0x5D) == 0 )
    {
      v50 = *(_BYTE *)(v36 + 3);
      if ( v50 == 1 || !v38 || !v39 )
        goto LABEL_141;
      LOBYTE(v36) = 0;
      v32 = (unsigned __int64)&v38[v39];
      v51 = v38 + 8;
      if ( (unsigned __int8)((*v38 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v51 <= v32 )
        {
          LOBYTE(v36) = 1;
          v41 = v38[2];
          v40 = v38[1] & 0xF;
          v42 = v38[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v51 <= v32 )
        {
          v40 = v38[2] & 0xF;
          v52 = v39;
          if ( (unsigned int)(unsigned __int8)v38[7] + 8 <= v39 )
            v52 = (unsigned __int8)v38[7] + 8;
          v32 = (unsigned __int64)(v38 + 13);
          v36 = (unsigned __int64)&v38[v52];
          if ( (unsigned __int64)(v38 + 13) > v36 )
            v58 = 0;
          else
            v58 = v38[12];
          if ( (unsigned __int64)(v38 + 14) > v36 )
            v60 = 0;
          else
            v60 = *(_BYTE *)v32;
          LOBYTE(v36) = 1;
        }
        v42 = v60;
        v41 = v58;
      }
      if ( (_BYTE)v36 )
      {
        LOBYTE(v4) = v41;
        v53 = v42;
      }
      else
      {
LABEL_141:
        v40 = 0;
        v53 = 0;
      }
      LODWORD(v55) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v32, v36, &v66, a2, v55, v50, v37, v40, v4, v53, a2);
    }
    goto LABEL_143;
  }
  if ( *v5 == 1314278989 )
  {
    v4 = sub_14010EA34(v5, a2);
    goto LABEL_145;
  }
  v6 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v6 )
    goto LABEL_74;
  v66 = 0LL;
  IoGetActivityIdIrp(a2, &v66);
  v8 = *(_QWORD *)(a2 + 184);
  switch ( *(_BYTE *)v8 )
  {
    case 0xE:
      if ( (byte_1401694F2 & 8) == 0 )
        break;
      v11 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
      goto LABEL_20;
    case 0xF:
      if ( byte_1401694F1 >= 0 )
        break;
      v12 = *(_QWORD *)(v8 + 8);
      v13 = 0;
      v61 = 0;
      v14 = 0LL;
      v15 = 0;
      v57 = 0;
      v16 = 0;
      v59 = 0;
      v17 = 0;
      v18 = 0;
      if ( *(_BYTE *)(v12 + 2) == 40 )
      {
        v19 = 0LL;
        v20 = 0;
        if ( *(_DWORD *)(v12 + 20) )
          goto LABEL_73;
        v21 = 0;
        v64 = *(_DWORD *)(v12 + 56);
        if ( v64 )
        {
          v22 = (unsigned int *)(v12 + 120);
          do
          {
            v23 = *v22;
            if ( (unsigned int)v23 >= 0x80 )
            {
              v24 = *(unsigned int *)(v12 + 16);
              if ( (unsigned int)v23 < (unsigned int)v24 )
              {
                if ( *(_DWORD *)(v23 + v12) == 64 )
                {
                  if ( v23 + 40 <= v24 )
                  {
                    if ( *(_BYTE *)(v23 + v12 + 10) )
                      v19 = (char *)((unsigned int)v23 + v12 + 24);
                    v14 = *(_BYTE **)(v23 + v12 + 16);
                    goto LABEL_35;
                  }
                }
                else if ( *(_DWORD *)(v23 + v12) == 65 )
                {
                  if ( v23 + 56 <= v24 )
                  {
                    v20 = 1;
                    if ( *(_BYTE *)(v23 + v12 + 10) )
                      v19 = (char *)((unsigned int)v23 + v12 + 24);
                    v14 = *(_BYTE **)((unsigned int)v23 + v12 + 16);
                    v15 = *(_BYTE *)((unsigned int)v23 + v12 + 9);
                    v61 = *(_BYTE *)(v23 + v12 + 8);
                  }
                }
                else if ( *(_DWORD *)(v23 + v12) == 66 && v23 + 40 <= v24 )
                {
                  if ( *(_DWORD *)(v23 + v12 + 12) )
                    v19 = (char *)(v23 + v12 + 32);
                  v14 = *(_BYTE **)(v23 + v12 + 24);
LABEL_35:
                  v13 = *(_BYTE *)(v23 + v12 + 8);
                  v15 = *(_BYTE *)(v23 + v12 + 9);
                  goto LABEL_44;
                }
                if ( v20 )
                  break;
              }
            }
            ++v21;
            ++v22;
          }
          while ( v21 < v64 );
          v13 = v61;
LABEL_44:
          v17 = 0;
        }
        if ( !v19 )
          goto LABEL_73;
        v25 = *v19;
        v18 = 0;
      }
      else
      {
        v25 = *(_BYTE *)(v12 + 72);
        v14 = *(_BYTE **)(v12 + 32);
        v15 = *(_BYTE *)(v12 + 11);
        v13 = *(_BYTE *)(v12 + 4);
        if ( *(_BYTE *)(v12 + 2) )
        {
LABEL_73:
          v3 = a1;
          break;
        }
      }
      if ( ((v25 - 8) & 0x5D) == 0 )
      {
        v26 = *(_BYTE *)(v12 + 3);
        if ( v26 == 1 || !v14 || !v15 )
          goto LABEL_71;
        LOBYTE(v12) = 0;
        v27 = &v14[v15];
        v28 = v14 + 8;
        if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
        {
          if ( v28 <= v27 )
          {
            LOBYTE(v12) = 1;
            v17 = v14[2];
            v16 = v14[1] & 0xF;
            v18 = v14[3];
          }
        }
        else
        {
          if ( v28 <= v27 )
          {
            v16 = v14[2] & 0xF;
            v29 = v15;
            if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
              v29 = (unsigned __int8)v14[7] + 8;
            v12 = (unsigned __int64)&v14[v29];
            if ( (unsigned __int64)(v14 + 13) > v12 )
              v57 = 0;
            else
              v57 = v14[12];
            if ( (unsigned __int64)(v14 + 14) > v12 )
              v59 = 0;
            else
              v59 = v14[13];
            LOBYTE(v12) = 1;
          }
          v18 = v59;
          v17 = v57;
        }
        if ( (_BYTE)v12 )
        {
          v30 = v17;
          v31 = v18;
        }
        else
        {
LABEL_71:
          v16 = 0;
          v30 = 0;
          v31 = 0LL;
        }
        LODWORD(v55) = *(_DWORD *)(a2 + 48);
        sub_140052E64(v31, v12, &v66, a2, v55, v26, v13, v16, v30, v31, a2);
      }
      goto LABEL_73;
    case 0x1B:
      if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v9 = *(unsigned int **)(a2 + 56);
          if ( v9 )
            v10 = *v9;
          else
            v10 = 0LL;
          LODWORD(v55) = v10;
          sub_140056AB0(v10, v8, &v66, a2, v55, *(_DWORD *)(a2 + 48));
        }
        break;
      }
      if ( (byte_1401694F2 & 0x20) != 0 )
      {
        v11 = &stru_140149FE8;
LABEL_20:
        LODWORD(v55) = *(_DWORD *)(a2 + 48);
        sub_140052F3C(v7, v11, &v66, a2, v55);
      }
      break;
  }
LABEL_74:
  IofCompleteRequest((PIRP)a2, 0);
LABEL_145:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 8) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    LODWORD(v56) = v4;
    sub_1400556F8((__int64)off_140168120->AttachedDevice, 0x19u, (__int64)&unk_140148948, v3, a2, v56);
  }
  return v4;
}
