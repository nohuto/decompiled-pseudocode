/*
 * XREFs of PnpSetDeviceInterfacePropertyData @ 0x140A18148
 * Callers:
 *     IoSetDeviceInterfacePropertyData @ 0x140A18100 (IoSetDeviceInterfacePropertyData.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x140B60060 (RtlLCIDToCultureName.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpSetDeviceInterfacePropertyData(
        unsigned __int16 *a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7)
{
  _WORD *v10; // rdi
  wchar_t *Buffer; // rbp
  __int64 v12; // r8
  _WORD *v13; // rcx
  unsigned __int64 v14; // rdx
  _WORD *Pool2; // rax
  _WORD *v16; // rbx
  unsigned int v17; // ebx
  _WORD *v19; // rax
  UNICODE_STRING String; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v21[176]; // [rsp+60h] [rbp-F8h] BYREF

  memset_0(v21, 0, 0xAAuLL);
  *(_QWORD *)&String.Length = 0LL;
  v10 = 0LL;
  if ( !a1 || !*((_QWORD *)a1 + 1) || !*a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    String.MaximumLength = 170;
    String.Buffer = (wchar_t *)v21;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
    Buffer = String.Buffer;
  }
  else
  {
    Buffer = 0LL;
  }
  v12 = a1[1];
  if ( (unsigned __int16)v12 < 2u )
    goto LABEL_16;
  v13 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !v13 )
    goto LABEL_16;
  v14 = *a1;
  if ( (unsigned __int16)v14 > (unsigned __int16)v12 )
  {
    v17 = -1073741811;
  }
  else
  {
    if ( (_WORD)v14 )
    {
      if ( !*v13
        || (_WORD)v14 == (_WORD)v12 && !v13[((unsigned __int64)*a1 >> 1) - 1]
        || v14 <= v12 - 2 && (!v13[(v14 >> 1) - 1] || !v13[v14 >> 1]) )
      {
        goto LABEL_23;
      }
      Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
      v16 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, *((const void **)a1 + 1), *a1);
        v10 = v16;
        v16[(unsigned __int64)*a1 >> 1] = 0;
LABEL_16:
        v17 = PiPnpRtlSetObjectProperty(*(_QWORD *)&PiPnpRtlCtx, v10, 3LL, 0LL, Buffer, a2, a5, a7, a6, 0);
        goto LABEL_17;
      }
    }
    else
    {
      if ( !*v13 )
      {
LABEL_23:
        v10 = (_WORD *)*((_QWORD *)a1 + 1);
        goto LABEL_16;
      }
      v19 = (_WORD *)ExAllocatePool2(0x100uLL);
      if ( v19 )
      {
        *v19 = 0;
        v10 = v19;
        goto LABEL_16;
      }
    }
    v17 = -1073741670;
  }
LABEL_17:
  PnpUnicodeStringToWstrFree(v10, a1);
  if ( v17 == -1073741275 )
    return (unsigned int)-1073741772;
  return v17;
}
