/*
 * XREFs of NtGdiSetMiterLimit @ 0x1401E5510
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiSetMiterLimit(HDC a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v5; // edi
  BOOL v6; // eax
  int v8; // [rsp+20h] [rbp-88h]
  _QWORD v9[14]; // [rsp+30h] [rbp-78h] BYREF
  float v10; // [rsp+C8h] [rbp+20h] BYREF

  v8 = 0;
  v10 = 0.0;
  v5 = bConvertDwordToFloat(a2, &v10);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v9, a1);
  if ( v5 )
  {
    if ( v9[0] )
    {
      v6 = v10 < 1.0;
      if ( v10 < 1.0 )
      {
        EngSetLastError(0x57u);
        v5 = 0;
        goto LABEL_7;
      }
      v8 = *(_DWORD *)(v9[0] + 224LL);
      *(float *)(v9[0] + 224LL) = v10;
      v5 = v6 + 1;
    }
    else
    {
      v5 = 0;
    }
    if ( v5 && a3 )
    {
      if ( a3 + 4 > MmUserProbeAddress || a3 + 4 <= a3 || (a3 & 3) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_DWORD *)a3 = v8;
    }
  }
LABEL_7:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v9);
  return v5;
}
