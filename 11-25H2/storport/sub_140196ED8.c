/*
 * XREFs of sub_140196ED8 @ 0x140196ED8
 * Callers:
 *     sub_140196914 @ 0x140196914 (sub_140196914.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400371B8 @ 0x1400371B8 (sub_1400371B8.c)
 *     sub_140039B40 @ 0x140039B40 (sub_140039B40.c)
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140195ED0 @ 0x140195ED0 (sub_140195ED0.c)
 */

__int64 __fastcall sub_140196ED8(__int64 a1, __int64 a2, struct _UNICODE_STRING **a3, _BYTE *a4)
{
  __int64 v4; // r15
  unsigned int v5; // ebx
  __int64 v7; // rcx
  unsigned __int64 v10; // rdi
  wchar_t *v11; // rax
  wchar_t *v12; // rsi
  _QWORD *v13; // rdi
  struct _UNICODE_STRING *v14; // rax
  struct _UNICODE_STRING *v15; // rdi
  PWSTR *p_Buffer; // rax
  _WORD *v17; // rax
  __int64 v18; // r11
  _WORD *v19; // rax
  WCHAR *v20; // r11
  int FullDriverPath; // esi
  __int64 v22; // rax
  __int128 v24; // [rsp+20h] [rbp-48h] BYREF
  struct _UNICODE_STRING *v25; // [rsp+70h] [rbp+8h] BYREF
  __int64 v26; // [rsp+78h] [rbp+10h]

  v26 = a2;
  v4 = a2;
  v5 = 0;
  *a4 = 0;
  v7 = *(_QWORD *)(a1 + 16);
  *a3 = 0LL;
  v24 = 0LL;
  sub_1400403EC(v7, (__int64)&v24);
  v10 = (unsigned int)(unsigned __int16)v24 + 10;
  v11 = (wchar_t *)sub_1400143E0(64LL, v10, 1145266514LL, *(_QWORD *)(a1 + 8));
  v12 = v11;
  if ( !v11 )
    return (unsigned int)-1073741670;
  sub_140039B40(v11, v10, L"%ws.sys", *((_QWORD *)&v24 + 1));
  v13 = *(_QWORD **)(v4 + 56);
  if ( v13 != (_QWORD *)(v4 + 56) )
  {
    while ( wcsicmp((const wchar_t *)v13[3], v12) )
    {
      v13 = (_QWORD *)*v13;
      if ( v13 == (_QWORD *)(v4 + 56) )
      {
        v4 = v26;
        goto LABEL_7;
      }
    }
    *a3 = (struct _UNICODE_STRING *)(v13 - 1);
    *a4 = 1;
    goto LABEL_9;
  }
LABEL_7:
  v14 = (struct _UNICODE_STRING *)sub_1400143E0(64LL, 176LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v25 = v14;
  v15 = v14;
  if ( !v14 )
  {
    v5 = -1073741670;
LABEL_9:
    ExFreePoolWithTag(v12, 0x44436152u);
    return v5;
  }
  p_Buffer = &v14->Buffer;
  p_Buffer[1] = (PWSTR)p_Buffer;
  *p_Buffer = (PWSTR)p_Buffer;
  *(_DWORD *)&v15->Length = 176;
  v15[1].Buffer = (PWSTR)sub_140197380;
  *(_QWORD *)&v15[2].Length = v12;
  v17 = (_WORD *)sub_1400143E0(64LL, 34LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  if ( !v17 )
    goto LABEL_14;
  sub_1400371B8(v17, 0x22uLL, (__int64)L"dumpstorport.sys");
  *(_QWORD *)&v15[3].Length = v18;
  v19 = (_WORD *)sub_1400143E0(64LL, 26LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  if ( !v19 )
    goto LABEL_14;
  sub_1400371B8(v19, 0x1AuLL, (__int64)L"storport.sys");
  v15[3].Buffer = v20;
  RtlInitUnicodeString(v15 + 9, L"\\SystemRoot\\System32\\Drivers\\dumpstorport.sys");
  FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), &v15[8]);
  v22 = sub_1400143E0(64LL, 208LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  if ( v22 )
  {
    *(_DWORD *)(&v15[4].MaximumLength + 1) = 208;
    v15[4].Buffer = (PWSTR)v22;
    if ( FullDriverPath >= 0 )
      v5 = FullDriverPath;
    *(_QWORD *)&v15[7].Length = v4;
    *a3 = v15;
  }
  else
  {
LABEL_14:
    v5 = -1073741670;
    sub_140195ED0((PVOID *)&v25);
  }
  return v5;
}
