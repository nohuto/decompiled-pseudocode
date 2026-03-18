/*
 * XREFs of ?bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x14019C36C
 * Callers:
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x14019BFDC (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 * Callees:
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x14019C490 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 */

__int64 __fastcall RTP_PATHMEMOBJ::bWritePoint(RTP_PATHMEMOBJ *this)
{
  int v1; // r8d
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rsi
  _QWORD *v7; // rdi
  bool v8; // al
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h]

  v1 = *((_DWORD *)this + 40);
  v3 = *((int *)this + 47);
  v4 = 1;
  if ( v1 == 2 )
  {
    v5 = *((int *)this + 47);
    LODWORD(v10) = *((_DWORD *)this + 2 * v3 + 51) - *((_DWORD *)this + 43);
    HIDWORD(v10) = *((_DWORD *)this + 2 * v3 + 52) - *((_DWORD *)this + 44);
    if ( (_DWORD)v10 != *((_DWORD *)this + 45)
      || *((_DWORD *)this + 2 * v3 + 52) - *((_DWORD *)this + 44) != *((_DWORD *)this + 46) )
    {
      v7 = (_QWORD *)((char *)this + 164);
      v8 = EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 19), 0LL, (const struct _POINTL *)((char *)this + 164), 1u);
      v4 = v8;
      if ( v8 )
      {
        *v7 = *(_QWORD *)((char *)this + 172);
        *(_QWORD *)((char *)this + 180) = v10;
      }
    }
    *(_QWORD *)((char *)this + 172) = *(_QWORD *)((char *)this + 8 * v5 + 204);
  }
  else
  {
    if ( v1 )
    {
      if ( v1 != 1 )
        return 0;
      v9 = *(_QWORD *)((char *)this + 8 * v3 + 204);
      *(_QWORD *)((char *)this + 172) = v9;
      *((_DWORD *)this + 45) = v9 - *((_DWORD *)this + 41);
      *((_DWORD *)this + 46) = *((_DWORD *)this + 44) - *((_DWORD *)this + 42);
    }
    else
    {
      *(_QWORD *)((char *)this + 164) = *(_QWORD *)((char *)this + 8 * v3 + 204);
    }
    *((_DWORD *)this + 40) = v1 + 1;
  }
  return v4;
}
