/*
 * XREFs of NtGdiGetTransform @ 0x14017C3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vInitPageToDevice@DC@@QEAAXPEAUMATRIX@@@Z @ 0x14017C50C (-vInitPageToDevice@DC@@QEAAXPEAUMATRIX@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiGetTransform(HDC a1, unsigned int a2, void *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r8
  EXFORMOBJ *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-E8h] BYREF
  _OWORD *v10; // [rsp+28h] [rbp-E0h] BYREF
  DC *v11[14]; // [rsp+30h] [rbp-D8h] BYREF
  struct _XFORML Src; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD v13[2]; // [rsp+B8h] [rbp-50h] BYREF
  int v14; // [rsp+D8h] [rbp-30h]

  memset(&Src, 0, sizeof(Src));
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  v5 = 0;
  if ( v11[0] )
  {
    v6 = a2;
    LODWORD(v6) = a2 | 0x80000000;
    DC::QuickInitXform(v11[0], &v9, v6);
    if ( v9 )
    {
      v7 = (EXFORMOBJ *)&v9;
LABEL_4:
      EXFORMOBJ::vGetCoefficient(v7, &Src);
      v5 = 1;
      goto LABEL_5;
    }
    if ( a2 == 772 )
    {
      memset(v13, 0, sizeof(v13));
      v14 = 0;
      DC::vInitPageToDevice(v11[0], (struct MATRIX *)v13);
      v10 = v13;
      v7 = (EXFORMOBJ *)&v10;
      goto LABEL_4;
    }
  }
LABEL_5:
  if ( v5 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a3, &Src, 0x18uLL);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
  return v5;
}
