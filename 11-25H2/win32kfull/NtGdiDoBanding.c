/*
 * XREFs of NtGdiDoBanding @ 0x140208AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x140208BE4 (-GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall NtGdiDoBanding(HDC a1, int a2, ULONG64 a3, ULONG64 a4)
{
  unsigned int v7; // ebx
  _BYTE *v8; // rdx
  _BYTE *v9; // rdx
  struct _POINTL v11; // [rsp+20h] [rbp-88h] BYREF
  struct tagSIZE v12; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v13[14]; // [rsp+30h] [rbp-78h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v13, a1);
  if ( v13[0] )
    v7 = GrepDoBanding((struct XDCOBJ *)v13, a2, &v11, &v12);
  else
    v7 = 0;
  if ( v7 )
  {
    if ( (a3 & 3) != 0 )
      goto LABEL_12;
    v8 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[7] = v8[7];
    *(struct _POINTL *)a3 = v11;
    if ( (a4 & 3) != 0 )
LABEL_12:
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a4;
    if ( a4 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[7] = v9[7];
    *(struct tagSIZE *)a4 = v12;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
  return v7;
}
