/*
 * XREFs of sub_14009F5C4 @ 0x14009F5C4
 * Callers:
 *     sub_1400624CC @ 0x1400624CC (sub_1400624CC.c)
 *     sub_14009D9F0 @ 0x14009D9F0 (sub_14009D9F0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_140090A2C @ 0x140090A2C (sub_140090A2C.c)
 *     sub_1400973B0 @ 0x1400973B0 (sub_1400973B0.c)
 *     sub_14009FFCC @ 0x14009FFCC (sub_14009FFCC.c)
 *     DoScreenSave_0 @ 0x1400A0338 (DoScreenSave_0.c)
 *     sub_1400A1F00 @ 0x1400A1F00 (sub_1400A1F00.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_14009F5C4(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // r15
  unsigned int v4; // eax
  int v5; // edi
  char v6; // r13
  int DynamicTerminalClasses; // esi
  __int64 v8; // rdi
  struct tagVARIANT *v9; // rdx
  char *v10; // rax
  char *v11; // r12
  unsigned int i; // edx
  __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax

  LOBYTE(v1) = -1;
  LOBYTE(v3) = -1;
  if ( *(_BYTE *)(a1 + 3368) )
  {
    v4 = *(_DWORD *)(a1 + 3388);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 1392);
    if ( v4 < 0x1E )
      v4 = 30;
  }
  v5 = 2 * v4;
  sub_1400973B0(a1, 2 * v4);
  v6 = 1;
  DynamicTerminalClasses = DoScreenSave_0(a1);
  if ( DynamicTerminalClasses < 0 )
  {
    sub_1400973B0(a1, v5);
    v6 = 2;
    DynamicTerminalClasses = sub_14009FFCC(a1);
    if ( DynamicTerminalClasses < 0 )
    {
      sub_1400973B0(a1, 0);
      v6 = 3;
      if ( *(_BYTE *)(a1 + 3368) && (unsigned __int8)sub_1400A1F00(*(_QWORD *)(a1 + 560)) )
      {
        DynamicTerminalClasses = 0;
        v8 = a1 + 24;
      }
      else
      {
        LOBYTE(v9) = *(_BYTE *)(a1 + 104);
        v8 = a1 + 24;
        DynamicTerminalClasses = CMSPAddress::get_DynamicTerminalClasses(*(CMSPAddress **)(a1 + 24), v9);
        if ( DynamicTerminalClasses < 0 )
          goto LABEL_26;
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 1400));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v8 + 4688LL));
      }
    }
    else
    {
      sub_1400973B0(a1, 0);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 1400));
      v8 = a1 + 24;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4692LL));
    }
  }
  else
  {
    sub_1400973B0(a1, 0);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1400));
    v8 = a1 + 24;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4696LL));
  }
  if ( *(_QWORD *)(a1 + 2376) )
  {
    if ( *(_QWORD *)(a1 + 2400) )
    {
      v10 = (char *)sub_1400143E0(64LL, (unsigned int)Size, 1700028754LL, *(_QWORD *)(a1 + 8));
      v11 = v10;
      if ( v10 )
      {
        v1 = 0LL;
        v3 = 0LL;
        memmove(v10, *(const void **)(a1 + 2376), (unsigned int)Size);
        for ( i = 0; i < dword_140168DB0; ++i )
        {
          v13 = (unsigned int)qword_140169170;
          if ( (_DWORD)qword_140169170 )
          {
            v14 = &v11[(unsigned int)dword_140169178 * i + 8];
            do
            {
              v1 += *((_QWORD *)v14 + 1);
              v3 += *(_QWORD *)v14;
              v14 += 24;
              --v13;
            }
            while ( v13 );
          }
        }
        v15 = (unsigned int)qword_140169170;
        v16 = *(_QWORD **)(a1 + 2400);
        if ( (_DWORD)qword_140169170 )
        {
          do
          {
            v1 -= *v16;
            v3 -= v16[1];
            v16 += 3;
            --v15;
          }
          while ( v15 );
        }
        ExFreePoolWithTag(v11, 0x65546152u);
      }
    }
  }
LABEL_26:
  if ( byte_1401694F5 < 0 )
    sub_140090A2C(
      a1 + 177,
      a1 + 168,
      a1 + 2104,
      *(const wchar_t **)(*(_QWORD *)v8 + 4720LL),
      *(_DWORD *)(*(_QWORD *)v8 + 56LL),
      *(_QWORD *)v8 + 5064LL,
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      a1 + 2104,
      (const char *)(a1 + 168),
      (const char *)(a1 + 177),
      (const char *)(a1 + 242),
      v6,
      DynamicTerminalClasses,
      v1,
      v3);
  *(_QWORD *)(a1 + 1408) = KeQueryUnbiasedInterruptTime();
  return (unsigned int)DynamicTerminalClasses;
}
