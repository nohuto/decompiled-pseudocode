/*
 * XREFs of ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1403DB190
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1403887AC (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGDEVICE::ValidateDirectFlipResource(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        enum _D3DDDIFORMAT a6,
        unsigned int a7)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // ecx
  _QWORD *v10; // r8
  unsigned int v11; // eax

  v7 = a3;
  if ( (*((_DWORD *)a2 + 1) & 1) != 0 && (v8 = *((_QWORD *)a2 + 7), v9 = 0, v8) && *(_DWORD *)(v8 + 132) == a7 )
  {
    v10 = *(_QWORD **)(v8 + 136);
    while ( 1 )
    {
      if ( v9 >= a7 )
        return 0LL;
      v11 = *((_DWORD *)v10 - 11);
      if ( (v11 & 0x2000) == 0 )
        break;
      if ( (_DWORD)v7 != ((v11 >> 6) & 0xF) )
      {
        WdLogSingleEntry4(3LL, a2, v7, ((unsigned __int64)*((unsigned int *)v10 - 11) >> 6) & 0xF, -1073741811LL);
        WdLogGlobalForLineNumber = 7277;
        return 3221225485LL;
      }
      v10 = (_QWORD *)*v10;
      ++v9;
    }
    WdLogSingleEntry3(3LL, a2, v10 - 6, -1073741811LL);
    WdLogGlobalForLineNumber = 7267;
  }
  else
  {
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 7254;
  }
  return 3221225485LL;
}
