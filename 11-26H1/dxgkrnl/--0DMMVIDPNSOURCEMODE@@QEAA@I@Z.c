/*
 * XREFs of ??0DMMVIDPNSOURCEMODE@@QEAA@I@Z @ 0x140046634
 * Callers:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x140095D9C (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODE::DMMVIDPNSOURCEMODE(DMMVIDPNSOURCEMODE *this, int a2)
{
  int v3; // edx
  int v4; // r8d
  DMMVIDPNSOURCEMODE *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 240;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          240,
          v3,
          v4,
          0LL,
          2,
          -1,
          (__int64)L"i_Id != D3DDDI_ID_UNINITIALIZED",
          240LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173006;
  *(_QWORD *)this = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
  result = this;
  *((_DWORD *)this + 18) = 0;
  *(_OWORD *)((char *)this + 76) = 0LL;
  *(_OWORD *)((char *)this + 92) = 0LL;
  return result;
}
