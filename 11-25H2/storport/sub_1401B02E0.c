/*
 * XREFs of sub_1401B02E0 @ 0x1401B02E0
 * Callers:
 *     sub_1401AFF24 @ 0x1401AFF24 (sub_1401AFF24.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400371B8 @ 0x1400371B8 (sub_1400371B8.c)
 *     sub_140039B40 @ 0x140039B40 (sub_140039B40.c)
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_14005A4F0 @ 0x14005A4F0 (sub_14005A4F0.c)
 */

__int64 __fastcall sub_1401B02E0(__int64 a1, __int64 a2, struct _UNICODE_STRING **a3, _BYTE *a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rcx
  unsigned __int64 v10; // rdi
  wchar_t *v11; // rax
  wchar_t *v12; // rbp
  _QWORD *i; // rdi
  struct _UNICODE_STRING *v14; // rax
  struct _UNICODE_STRING *v15; // rdi
  PWSTR *p_Buffer; // rax
  _WORD *v17; // rax
  __int64 v18; // r11
  _WORD *v19; // rax
  WCHAR *v20; // r11
  int FullDriverPath; // eax
  unsigned int v22; // ebp
  __int64 v23; // rax
  int v24; // eax
  __int128 v26; // [rsp+20h] [rbp-48h] BYREF
  struct _UNICODE_STRING *v27; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+78h] [rbp+10h]

  v28 = a2;
  v5 = 0;
  *a4 = 0;
  v7 = *(_QWORD *)(a1 + 16);
  *a3 = 0LL;
  v26 = 0LL;
  sub_1400403EC(v7, (__int64)&v26);
  v10 = (unsigned int)(unsigned __int16)v26 + 10;
  v11 = (wchar_t *)sub_1400143E0(64LL, v10, 1145266514LL, *(_QWORD *)(a1 + 8));
  v12 = v11;
  if ( v11 )
  {
    sub_140039B40(v11, v10, L"%ws.sys", *((_QWORD *)&v26 + 1));
    for ( i = *(_QWORD **)(a2 + 56); i != (_QWORD *)(a2 + 56); i = (_QWORD *)*i )
    {
      if ( !wcsicmp((const wchar_t *)i[3], v12) )
      {
        *a3 = (struct _UNICODE_STRING *)(i - 1);
        *a4 = 1;
LABEL_10:
        ExFreePoolWithTag(v12, 0x44436152u);
        return v5;
      }
    }
    v14 = (struct _UNICODE_STRING *)sub_1400143E0(64LL, 176LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v27 = v14;
    v15 = v14;
    if ( !v14 )
    {
      v5 = -1073741670;
      goto LABEL_10;
    }
    p_Buffer = &v14->Buffer;
    p_Buffer[1] = (PWSTR)p_Buffer;
    *p_Buffer = (PWSTR)p_Buffer;
    *(_DWORD *)&v15->Length = 176;
    v15[1].Buffer = (PWSTR)sub_14017F720;
    *(_QWORD *)&v15[2].Length = v12;
    v17 = (_WORD *)sub_1400143E0(64LL, 34LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( !v17 )
      goto LABEL_16;
    sub_1400371B8(v17, 0x22uLL, (__int64)L"dumpstorport.sys");
    *(_QWORD *)&v15[3].Length = v18;
    v19 = (_WORD *)sub_1400143E0(64LL, 26LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( !v19 )
      goto LABEL_16;
    sub_1400371B8(v19, 0x1AuLL, (__int64)L"storport.sys");
    v15[3].Buffer = v20;
    RtlInitUnicodeString(v15 + 9, L"\\SystemRoot\\System32\\Drivers\\dumpstorport.sys");
    FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), &v15[8]);
    v22 = 0;
    if ( FullDriverPath >= 0 )
      v22 = FullDriverPath;
    v23 = sub_1400143E0(64LL, 208LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( v23 )
    {
      *(_DWORD *)(&v15[4].MaximumLength + 1) = 208;
      v15[4].Buffer = (PWSTR)v23;
      *(_QWORD *)&v15[7].Length = v28;
      if ( (*(_DWORD *)(a1 + 604) & 1) != 0 || (v24 = *(_DWORD *)(a1 + 4276), v24 == 10) || v24 == 1 )
        *(_DWORD *)&v15[4].Length |= 1u;
      *a3 = v15;
      return v22;
    }
    else
    {
LABEL_16:
      v5 = -1073741670;
      sub_14005A4F0((PVOID *)&v27);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
