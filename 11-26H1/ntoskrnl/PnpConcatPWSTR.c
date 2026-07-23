/*
 * XREFs of PnpConcatPWSTR @ 0x140953094
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x140952B4C (PiDqOpenUserObjectRegKey.c)
 *     PiSwStopDestroy @ 0x1409B2018 (PiSwStopDestroy.c)
 *     PnpActivatePdcForDeviceEvent @ 0x140A19D10 (PnpActivatePdcForDeviceEvent.c)
 *     PiSwGetChildPdo @ 0x140A8BC18 (PiSwGetChildPdo.c)
 *     PiSwInstanceInfoInit @ 0x140A8D448 (PiSwInstanceInfoInit.c)
 *     PipCheckForDenyExecute @ 0x140B04190 (PipCheckForDenyExecute.c)
 * Callees:
 *     RtlStringCbCatW @ 0x14041D8F0 (RtlStringCbCatW.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 PnpConcatPWSTR(unsigned __int64 a1, ULONG a2, PVOID *a3, ...)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r11
  va_list v8; // r9
  _WORD *v9; // rax
  unsigned __int64 i; // rdx
  NTSTATUS v11; // ebx
  size_t v12; // rbp
  _WORD *Pool2; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  NTSTRSAFE_PCWSTR *v16; // rsi
  unsigned __int64 v18; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  v3 = v18;
  *a3 = 0LL;
  v6 = 0LL;
  v7 = 1LL;
  va_copy(v8, va);
  while ( v6 < v3 )
  {
    v8 += 8;
    v9 = *(_WORD **)v8;
    if ( *(_QWORD *)v8 )
    {
      if ( a1 > 0x7FFFFFFF )
        goto LABEL_22;
      for ( i = a1; i; --i )
      {
        if ( !*v9 )
          break;
        ++v9;
      }
      v11 = i == 0 ? 0xC000000D : 0;
      if ( !i )
        goto LABEL_24;
      v7 += (a1 - i) & -(__int64)(i != 0);
    }
    ++v6;
  }
  if ( v7 > a1 )
  {
LABEL_22:
    v11 = -1073741811;
    goto LABEL_24;
  }
  v12 = 2 * v7;
  if ( !is_mul_ok(v7, 2uLL) )
  {
    v11 = -1073741675;
    goto LABEL_24;
  }
  v11 = 0;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
  *a3 = Pool2;
  if ( !Pool2 )
  {
    v11 = -1073741670;
LABEL_24:
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, a2);
      *a3 = 0LL;
    }
    return (unsigned int)v11;
  }
  *Pool2 = 0;
  v14 = v18;
  v15 = 0LL;
  if ( v18 )
  {
    va_copy((va_list)v16, va);
    do
    {
      if ( *++v16 )
      {
        v11 = RtlStringCbCatW((NTSTRSAFE_PWSTR)*a3, v12, *v16);
        if ( v11 < 0 )
          goto LABEL_24;
        v14 = v18;
      }
      ++v15;
    }
    while ( v15 < v14 );
  }
  return (unsigned int)v11;
}
