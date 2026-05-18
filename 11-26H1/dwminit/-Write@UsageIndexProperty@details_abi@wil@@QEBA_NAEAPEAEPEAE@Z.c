/*
 * XREFs of ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18000CE38
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000ADFC (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180003250 (_invalid_parameter_noinfo.c)
 *     memcpy_s @ 0x180006CEC (memcpy_s.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Write(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char v3; // al
  _DWORD *v4; // rbx
  _DWORD *v8; // rbp
  unsigned __int16 *v9; // rbp
  rsize_t v10; // r9
  bool result; // al

  v3 = *((_BYTE *)this + 2);
  v4 = *a2;
  if ( v3 != 1 )
  {
    if ( v3 != 2 )
      goto LABEL_13;
    v8 = v4 + 1;
    if ( v4 + 1 > (_DWORD *)a3 )
      return 0;
    if ( v4 )
    {
      if ( this != (wil::details_abi::UsageIndexProperty *)-4LL )
      {
        *v4 = *((_DWORD *)this + 1);
        goto LABEL_12;
      }
      *v4 = 0;
    }
LABEL_11:
    *(_DWORD *)_o__errno(this) = 22;
    invalid_parameter_noinfo();
    goto LABEL_12;
  }
  v8 = (_DWORD *)((char *)v4 + 2);
  if ( (unsigned __int8 *)((char *)v4 + 2) > a3 )
    return 0;
  if ( !v4 )
    goto LABEL_11;
  *(_WORD *)v4 = *((_WORD *)this + 2);
LABEL_12:
  v4 = v8;
LABEL_13:
  if ( !*(_WORD *)this )
  {
    if ( (unsigned __int8 *)((char *)v4 + 2) <= a3 )
    {
      v9 = (unsigned __int16 *)((char *)this + 8);
      memcpy_s(v4, a3 - (unsigned __int8 *)v4, (char *)this + 8, 2uLL);
      v4 = (_DWORD *)((char *)v4 + 2);
      goto LABEL_17;
    }
    return 0;
  }
  v9 = (unsigned __int16 *)((char *)this + 8);
LABEL_17:
  v10 = *v9;
  if ( (unsigned __int8 *)((char *)v4 + v10) > a3 )
    return 0;
  memcpy_s(v4, a3 - (unsigned __int8 *)v4, *((const void *const *)this + 3), v10);
  result = 1;
  *a2 = (unsigned __int8 *)v4 + *v9;
  return result;
}
