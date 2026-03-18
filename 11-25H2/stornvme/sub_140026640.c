/*
 * XREFs of sub_140026640 @ 0x140026640
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_140019038 @ 0x140019038 (sub_140019038.c)
 *     sub_1400282AC @ 0x1400282AC (sub_1400282AC.c)
 *     sub_14002A860 @ 0x14002A860 (sub_14002A860.c)
 */

__int64 __fastcall sub_140026640(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int8 v8; // cl
  int v9; // ebp
  __int64 v10; // rcx
  unsigned int v11; // r9d
  unsigned int v12; // r12d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  int v15; // edx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rbp
  __int64 v19; // r15
  unsigned int v20; // esi
  bool v21; // cc
  __int64 PhysicalAddress; // rax
  unsigned int v23; // edx
  _QWORD *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // edx
  _QWORD *v28; // r8
  __int64 v29; // rax
  unsigned int v30; // eax
  char v31; // al
  __int64 v32; // [rsp+58h] [rbp+10h] BYREF
  _DWORD *v33; // [rsp+68h] [rbp+20h] BYREF

  result = sub_140005000(a2);
  v5 = result;
  if ( *(_BYTE *)(v6 + 3) != 1 )
  {
    *(_BYTE *)(result + 4225) |= 8u;
    return result;
  }
  v33 = 0LL;
  if ( (unsigned int)sub_140019038() && (*(_DWORD *)(a1 + 4056) & 0x10000) != 0 && *(_DWORD *)(sub_140005000(a2) + 4220) )
    StorPortExtendedFunction(127LL, a1, a2, v7);
  sub_14000B900(a2, &v33);
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v8 = *(_BYTE *)(a2 + 7);
  v9 = *(_DWORD *)(v5 + 4120);
  v10 = *(_QWORD *)(a1 + 8LL * v8 + 1672);
  LODWORD(v32) = *(_DWORD *)(v5 + 4136);
  v11 = *(_DWORD *)(v10 + 52);
  HIDWORD(v32) = *(_DWORD *)(v5 + 4140);
  v12 = (unsigned __int16)*(_DWORD *)(v5 + 4144) + 1;
  v13 = (v11 + *v33 - 1) / v11;
  v32 += v12;
  v14 = v13 - v12;
  v15 = v32;
  *(_DWORD *)(v5 + 4140) = HIDWORD(v32);
  *(_WORD *)(v5 + 4144) = v14 - 1;
  v16 = v11 * v12;
  *(_DWORD *)(v5 + 4136) = v15;
  v17 = v16 + (v9 & 0xFFF);
  LODWORD(v16) = (*(_DWORD *)(v5 + 4120) + v16) & 0xFFF;
  v18 = v17 >> 12;
  v19 = (unsigned int)v16;
  v20 = ((unsigned int)v16 + v11 * v14 + 4095) >> 12;
  if ( (unsigned int)sub_140019038() )
  {
    v26 = *(_QWORD *)(v5 + 4184);
    if ( (_DWORD)v18 )
    {
      *(_QWORD *)(v5 + 4120) = v19 + v26;
      if ( v20 != 1 )
      {
        if ( v20 == 2 )
        {
          *(_QWORD *)(v5 + 4128) = *(_QWORD *)(v5 + 8LL * (unsigned int)v18);
        }
        else
        {
          v27 = 0;
          v28 = (_QWORD *)v5;
          do
          {
            v29 = v27 + (unsigned int)v18;
            ++v27;
            *v28++ = *(_QWORD *)(v5 + 8 * v29);
          }
          while ( v27 < v20 - 1 );
        }
        goto LABEL_34;
      }
    }
    else
    {
      *(_QWORD *)(v5 + 4120) = v19 + (v26 & 0xFFFFFFFFFFFFF000uLL);
      if ( v20 != 1 )
      {
        if ( v20 == 2 )
          *(_QWORD *)(v5 + 4128) = *(_QWORD *)v5;
        goto LABEL_34;
      }
    }
    *(_QWORD *)(v5 + 4128) = 0LL;
LABEL_34:
    *(_DWORD *)(v5 + 4220) = v20;
    goto LABEL_35;
  }
  if ( !(_DWORD)v18 )
  {
    *(_QWORD *)(v5 + 4120) = v19 + (*(_QWORD *)(v5 + 4120) & 0xFFFFFFFFFFFFF000uLL);
    if ( v20 != 1 )
    {
      v21 = v20 <= 2;
      if ( v20 == 2 )
      {
        PhysicalAddress = *(_QWORD *)v5;
LABEL_38:
        *(_QWORD *)(v5 + 4128) = PhysicalAddress;
        goto LABEL_39;
      }
      goto LABEL_36;
    }
LABEL_16:
    *(_QWORD *)(v5 + 4128) = 0LL;
    goto LABEL_39;
  }
  *(_QWORD *)(v5 + 4120) = v19 + *(_QWORD *)(v5 + 8LL * (unsigned int)(v18 - 1));
  if ( v20 == 1 )
    goto LABEL_16;
  if ( v20 == 2 )
  {
    *(_QWORD *)(v5 + 4128) = *(_QWORD *)(v5 + 8LL * (unsigned int)v18);
    goto LABEL_39;
  }
  v23 = 0;
  v24 = (_QWORD *)v5;
  do
  {
    v25 = v23 + (unsigned int)v18;
    ++v23;
    *v24++ = *(_QWORD *)(v5 + 8 * v25);
  }
  while ( v23 < v20 - 1 );
LABEL_35:
  v21 = v20 <= 2;
LABEL_36:
  if ( !v21 )
  {
    LODWORD(v32) = 0;
    PhysicalAddress = StorPortGetPhysicalAddress(a1, a2, v5, &v32);
    goto LABEL_38;
  }
LABEL_39:
  if ( (unsigned int)sub_140019038()
    && (*(_DWORD *)(a1 + 4056) & 0x10000) != 0
    && (v30 = sub_14002A860(a1, a2, v12)) != 0 )
  {
    result = sub_1400282AC(v30);
    *(_BYTE *)(a2 + 3) = result;
    *(_BYTE *)(v5 + 4225) |= 8u;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 0;
    v31 = *(_BYTE *)(v5 + 4225);
    *(_QWORD *)(v5 + 4192) = 0LL;
    *(_BYTE *)(v5 + 4225) = v31 & 0xF8 | 6;
    return sub_1400092F0(a1, a2);
  }
  return result;
}
