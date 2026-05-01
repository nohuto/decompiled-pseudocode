/*
 * XREFs of ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000CC20
 * Callers:
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x18000611C (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180006290 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Read(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char v3; // al
  char *v5; // r8
  __int16 v8; // ax
  unsigned __int8 *v9; // rcx
  bool result; // al
  char *v11; // rdi
  char *v12; // rbp
  unsigned __int16 Destination; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_BYTE *)this + 2);
  v5 = (char *)*a2;
  if ( v3 == 1 )
  {
    v11 = v5 + 2;
    if ( v5 + 2 > (char *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v5;
    Destination = 0;
    memcpy_s(&Destination, 2uLL, v5, 2uLL);
    *((_DWORD *)this + 1) = Destination;
    goto LABEL_9;
  }
  if ( v3 == 2 )
  {
    v11 = v5 + 4;
    if ( v5 + 4 > (char *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v5;
    memcpy_s((char *)this + 4, 4uLL, v5, 4uLL);
LABEL_9:
    v5 = v11;
  }
  v8 = *(_WORD *)this;
  *((_WORD *)this + 4) = *(_WORD *)this;
  if ( !v8 )
  {
    v12 = v5 + 2;
    if ( v5 + 2 > (char *)a3 )
      return 0;
    memcpy_s((char *)this + 8, 2uLL, v5, 2uLL);
    v5 = v12;
  }
  v9 = (unsigned __int8 *)&v5[*((unsigned __int16 *)this + 4)];
  if ( v9 <= a3 )
  {
    *((_QWORD *)this + 3) = v5;
    result = 1;
    *a2 = v9;
    return result;
  }
  return 0;
}
