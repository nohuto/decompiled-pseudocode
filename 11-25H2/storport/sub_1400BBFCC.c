/*
 * XREFs of sub_1400BBFCC @ 0x1400BBFCC
 * Callers:
 *     sub_1400BBDE0 @ 0x1400BBDE0 (sub_1400BBDE0.c)
 * Callees:
 *     sub_14003741C @ 0x14003741C (sub_14003741C.c)
 *     sub_14006F488 @ 0x14006F488 (sub_14006F488.c)
 *     sub_14006FCC8 @ 0x14006FCC8 (sub_14006FCC8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401AD970 @ 0x1401AD970 (sub_1401AD970.c)
 *     sub_1401B06F4 @ 0x1401B06F4 (sub_1401B06F4.c)
 */

__int64 __fastcall sub_1400BBFCC(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r14
  ULONG v5; // r15d
  int v6; // eax
  int v7; // ebx
  PVOID *v8; // rsi
  UUID v9; // xmm6
  __int64 v10; // rax
  __int64 result; // rax
  char v12; // al
  UUID v13; // xmm0
  char v14; // al
  int KeyHandle; // [rsp+38h] [rbp-49h] BYREF
  __int64 p_Uuid; // [rsp+40h] [rbp-41h] BYREF
  struct _UNICODE_STRING v17; // [rsp+50h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  UUID Uuid; // [rsp+78h] [rbp-9h] BYREF
  __int128 v20; // [rsp+88h] [rbp+7h]

  v2 = *(_BYTE **)(a1 + 144);
  KeyHandle = 16;
  v5 = (unsigned __int8)v2[3] | ((unsigned __int8)v2[2] << 8);
  p_Uuid = (__int64)&Uuid;
  v20 = 0LL;
  DestinationString = 0LL;
  v17 = 0LL;
  Uuid = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v17, L"GeneratedID");
  v6 = sub_1401AD970(*(_QWORD *)(a1 + 8), (int)&DestinationString, (int)&v17, 3, (__int64)&p_Uuid, &KeyHandle);
  if ( v6 == -1073741772 )
  {
    v7 = 0;
    ExAcquireResourceExclusiveLite(&stru_140169420, 1u);
    v8 = (PVOID *)qword_140169490;
    v9 = 0LL;
    while ( v8 != &qword_140169490 )
    {
      if ( !(unsigned int)sub_14003741C(v2, v8[2]) )
      {
        v9 = *(UUID *)(v8 + 3);
        break;
      }
      v8 = (PVOID *)*v8;
    }
    Uuid = v9;
    v10 = *(_QWORD *)&v9.Data1 - v20;
    if ( *(_QWORD *)&v9.Data1 == (_QWORD)v20 )
      v10 = *(_QWORD *)Uuid.Data4 - *((_QWORD *)&v20 + 1);
    if ( !v10 )
    {
      v7 = ExUuidCreate(&Uuid);
      if ( v7 >= 0 )
      {
        v7 = sub_14006FCC8(v2, v5, &Uuid);
        if ( v7 >= 0 )
          v7 = sub_14006F488(v2, v5, &Uuid);
      }
    }
    ExReleaseResourceLite(&stru_140169420);
    if ( v7 < 0 )
      return 3221225473LL;
    v6 = sub_1401B06F4(*(_QWORD *)(a1 + 8), (unsigned int)&DestinationString, (unsigned int)&v17, 3, p_Uuid, KeyHandle);
  }
  if ( v6 < 0 )
    return 3221225473LL;
  v12 = *(_BYTE *)a2 & 0xF1;
  p_Uuid = 0x202020205446534DLL;
  v13 = Uuid;
  *(_BYTE *)a2 = v12 | 1;
  v14 = *(_BYTE *)(a2 + 1) & 0xC1;
  *(_BYTE *)(a2 + 3) = 24;
  *(_BYTE *)(a2 + 1) = v14 | 1;
  *(_QWORD *)(a2 + 4) = p_Uuid;
  result = 0LL;
  *(UUID *)(a2 + 12) = v13;
  return result;
}
