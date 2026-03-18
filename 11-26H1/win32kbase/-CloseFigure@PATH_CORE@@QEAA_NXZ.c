/*
 * XREFs of ?CloseFigure@PATH_CORE@@QEAA_NXZ @ 0x1400C2A50
 * Callers:
 *     ?bCloseFigure@EPATHOBJ@@QEAA_NXZ @ 0x1400C2A10 (-bCloseFigure@EPATHOBJ@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall PATH_CORE::CloseFigure(PATH_CORE *this)
{
  __int64 v1; // r8
  bool result; // al
  int v3; // edx

  v1 = *((_QWORD *)this + 2);
  result = 0;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 16);
    if ( (v3 & 8) == 0 )
    {
      result = 1;
      *(_DWORD *)(v1 + 16) = v3 | 8;
    }
  }
  *((_DWORD *)this + 12) |= 1u;
  return result;
}
