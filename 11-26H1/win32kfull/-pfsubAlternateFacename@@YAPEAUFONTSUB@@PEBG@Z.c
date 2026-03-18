/*
 * XREFs of ?pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z @ 0x1400FEA0C
 * Callers:
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1400CA61C (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400FEF94 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1401D5F14 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

struct FONTSUB *__fastcall pfsubAlternateFacename(WCHAR *a1, __int64 a2, __int64 a3)
{
  WCHAR *v4; // rbx
  __int64 v5; // r14
  _BYTE *v6; // rdi
  WCHAR *v7; // rax
  _BYTE *i; // r15
  __int64 v9; // rbx
  unsigned __int16 *v10; // rax
  int v11; // r8d
  int v12; // ecx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-29h] BYREF
  _WORD v16[32]; // [rsp+40h] [rbp-19h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v4 = a1;
  DestinationString = 0LL;
  v5 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v6 = *(_BYTE **)(v5 + 19656);
  v7 = v4 + 31;
  for ( i = &v6[196 * *(unsigned int *)(v5 + 19672)]; v4 < v7; ++v4 )
  {
    if ( !*v4 )
      break;
  }
  v9 = v4 - a1;
  if ( (_DWORD)v9 )
  {
    SourceString.Buffer = a1;
    SourceString.MaximumLength = 64;
    DestinationString.MaximumLength = 64;
    SourceString.Length = 2 * v9;
    DestinationString.Buffer = v16;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
  }
  v16[(int)v9] = 0;
  while ( 1 )
  {
    if ( v6 >= i )
      return 0LL;
    v10 = v16;
    do
    {
      v11 = *(unsigned __int16 *)((char *)v10 + v6 + 64 - (_BYTE *)v16);
      v12 = *v10 - v11;
      if ( v12 )
        break;
      ++v10;
    }
    while ( v11 );
    if ( !v12
      && ((v6[129] & 1) != 0 || v6[128] == v6[194])
      && (v6 != *(_BYTE **)(v5 + 19656) || (GetAppCompatFlags2(1024LL) & 0x400) != 0) )
    {
      break;
    }
    v6 += 196;
  }
  return (struct FONTSUB *)v6;
}
