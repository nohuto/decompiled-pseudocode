/*
 * XREFs of NtGdiScaleValues @ 0x14033A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x14019E730 (-GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ??0TMPBUFOBJ@@QEAA@K@Z @ 0x140338C5C (--0TMPBUFOBJ@@QEAA@K@Z.c)
 *     ??1TMPBUFOBJ@@QEAA@XZ @ 0x140338C8C (--1TMPBUFOBJ@@QEAA@XZ.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiScaleValues(HDC a1, char *a2, unsigned int a3)
{
  unsigned __int64 v6; // rdi
  void *v7; // rbx
  char *v8; // rcx
  SIZE_T v9; // r14
  unsigned int v10; // edi
  _QWORD v12[14]; // [rsp+20h] [rbp-88h] BYREF
  void *Src; // [rsp+C8h] [rbp+20h] BYREF

  v6 = 4LL * a3;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  TMPBUFOBJ::TMPBUFOBJ((TMPBUFOBJ *)&Src, v6);
  v7 = Src;
  if ( !Src )
  {
    TMPBUFOBJ::~TMPBUFOBJ((TMPBUFOBJ *)&Src);
    return 0LL;
  }
  if ( (_DWORD)v6 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = &a2[(unsigned int)v6];
    if ( (unsigned __int64)v8 > MmUserProbeAddress || v8 < a2 )
      v7 = Src;
  }
  v9 = (unsigned int)v6;
  memmove(v7, a2, (unsigned int)v6);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v12, a1);
  v10 = v12[0] != 0LL;
  if ( v12[0] )
  {
    v10 = GrepScaleValues((struct XDCOBJ *)v12, (int *)v7, a3);
    if ( v10 )
    {
      ProbeForWrite(a2, v9, 4u);
      memmove(a2, v7, v9);
    }
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
  TMPBUFOBJ::~TMPBUFOBJ((TMPBUFOBJ *)&Src);
  return v10;
}
