/*
 * XREFs of sub_18000C508 @ 0x18000C508
 * Callers:
 *     sub_18000C0B4 @ 0x18000C0B4 (sub_18000C0B4.c)
 *     sub_18000C214 @ 0x18000C214 (sub_18000C214.c)
 * Callees:
 *     <none>
 */

__int64 sub_18000C508()
{
  int v5; // ebp
  bool v7; // zf
  int v12; // edi
  int v13; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  int v18; // esi
  int v19; // r10d
  unsigned int v20; // r11d
  unsigned __int64 v36; // rax
  int v37; // eax
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  int v41; // [rsp+20h] [rbp+8h]

  _RAX = 0LL;
  __asm { cpuid }
  v5 = _RAX;
  _RAX = 1LL;
  v7 = ((unsigned int)_RBX ^ 0x756E6547 | (unsigned int)_RCX ^ 0x6C65746E | (unsigned int)_RDX ^ 0x49656E69) == 0;
  __asm { cpuid }
  v12 = _RCX;
  if ( v7
    && ((v13 = _RAX & 0xFFF3FF0, qword_1801C7B48 = 0x8000LL, qword_1801C7B50 = -1LL, v13 == 67264)
     || v13 == 132704
     || v13 == 132720
     || (v14 = (unsigned int)(v13 - 198224), (unsigned int)v14 <= 0x20) && (v15 = 0x100010001LL, _bittest64(&v15, v14))) )
  {
    v16 = dword_1801C7DB4 | 1;
    dword_1801C7DB4 |= 1u;
  }
  else
  {
    v16 = dword_1801C7DB4;
  }
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( v5 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    v18 = _RDX;
    v17 = _RBX;
    if ( (_RBX & 0x200) != 0 )
      dword_1801C7DB4 = v16 | 2;
    if ( (int)_RAX >= 1 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      v19 = _RDX;
    }
    _RAX = 36LL;
    if ( v5 >= 36 )
    {
      __asm { cpuid }
      v20 = _RBX;
    }
  }
  v36 = qword_1801C7B58 & 0xFFFFFFFFFFFFFFFEuLL;
  dword_1801C7B40 = 1;
  dword_1801C7B44 = 2;
  qword_1801C7B58 &= ~1uLL;
  if ( (v12 & 0x100000) != 0 )
  {
    v36 &= ~0x10uLL;
    dword_1801C7B40 = 2;
    qword_1801C7B58 = v36;
    dword_1801C7B44 = 6;
  }
  if ( (v12 & 0x8000000) != 0 )
  {
    __asm { xgetbv }
    v41 = v36;
    if ( (v12 & 0x10000000) == 0 || (v36 & 6) != 6 )
    {
LABEL_32:
      if ( (v19 & 0x200000) != 0 && (*(_QWORD *)&v41 & 0x80000LL) != 0 )
        qword_1801C7B58 &= ~0x80uLL;
      return 0LL;
    }
    v37 = dword_1801C7B44 | 8;
    dword_1801C7B40 = 3;
    dword_1801C7B44 |= 8u;
    if ( (v17 & 0x20) != 0 )
    {
      dword_1801C7B40 = 5;
      dword_1801C7B44 = v37 | 0x20;
      v38 = qword_1801C7B58 & 0xFFFFFFFFFFFFFFFDuLL;
      qword_1801C7B58 &= ~2uLL;
      if ( (v17 & 0xD0030000) != 0xD0030000 )
      {
LABEL_26:
        if ( (v18 & 0x800000) != 0 )
          qword_1801C7B58 = v38 & 0xFFFFFFFFFEFFFFFFuLL;
        if ( (v19 & 0x80000) != 0 && (v41 & 0xE0) == 0xE0 )
        {
          dword_1801C7DB8 = v20 & 0x400FF;
          v39 = qword_1801C7B58 & ~(HIWORD(v20) & 6 | 0x1000029LL);
          qword_1801C7B58 = v39;
          if ( (unsigned __int8)v20 > 1u )
            qword_1801C7B58 = v39 & 0xFFFFFFFFFFFFFFBFuLL;
        }
        goto LABEL_32;
      }
      if ( (v41 & 0xE0) == 0xE0 )
      {
        dword_1801C7B44 |= 0x40u;
        v38 = qword_1801C7B58 & 0xFFFFFFFFFFFFFFDBuLL;
        dword_1801C7B40 = 6;
        qword_1801C7B58 &= 0xFFFFFFFFFFFFFFDBuLL;
        goto LABEL_26;
      }
    }
    v38 = qword_1801C7B58;
    goto LABEL_26;
  }
  return 0LL;
}
