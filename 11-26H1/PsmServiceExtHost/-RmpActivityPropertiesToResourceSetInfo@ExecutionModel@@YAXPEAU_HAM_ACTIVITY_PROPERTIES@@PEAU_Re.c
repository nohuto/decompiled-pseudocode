/*
 * XREFs of ?RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x18002C000
 * Callers:
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18002BE64 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::RmpActivityPropertiesToResourceSetInfo(
        ExecutionModel *this,
        struct _HAM_ACTIVITY_PROPERTIES *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  __int64 v3; // rax
  int v6; // ecx
  unsigned __int64 v7; // rbx
  __int16 v8; // dx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rdi
  __int16 v13; // ax
  __int16 v14; // cx
  _DWORD *v15; // rax
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 40);
  BitMapHeader = 0LL;
  if ( (v3 & 8) != 0 )
    *((_QWORD *)a2 + 8) = *((_QWORD *)this + 44);
  if ( (v3 & 4) != 0 )
    *((_QWORD *)a2 + 3) = *((_QWORD *)this + 43);
  if ( (v3 & 2) != 0 )
    *((_QWORD *)a2 + 7) = *((_QWORD *)this + 42);
  if ( (v3 & 1) != 0 )
    *((_QWORD *)a2 + 45) = *((_QWORD *)this + 41);
  v6 = *((_DWORD *)this + 92);
  if ( (v3 & 0x20) != 0 )
    *((_DWORD *)a2 + 11) ^= ((unsigned __int8)v6 ^ (unsigned __int8)*((_DWORD *)a2 + 11)) & 3;
  if ( (v3 & 0x40) != 0 )
    *((_DWORD *)a2 + 11) ^= ((unsigned __int8)v6 ^ (unsigned __int8)*((_DWORD *)a2 + 11)) & 8;
  if ( (v3 & 0x80u) != 0LL )
    *((_DWORD *)a2 + 11) ^= (*((_DWORD *)this + 92) ^ *((_DWORD *)a2 + 11)) & 0x20;
  v7 = 0LL;
  v8 = 1;
  if ( (*((_BYTE *)this + 312) & 1) != 0 )
  {
    v9 = *((_DWORD *)this + 78);
    if ( v9 != 1 )
    {
      *((_DWORD *)a2 + 4) = v9;
      v10 = *((unsigned __int8 *)this + 315);
      if ( (_BYTE)v10 )
      {
        *((_DWORD *)a2 + 8) = v10;
        *((_DWORD *)a2 + 2) = v10;
        *((_DWORD *)a2 + 24) = v10;
        *((_DWORD *)a2 + 30) = v10;
        *((_DWORD *)a2 + 36) = v10;
        *((_DWORD *)a2 + 8) = *((unsigned __int8 *)this + 316);
      }
    }
  }
  if ( (*((_BYTE *)this + 296) & 2) != 0 )
  {
    *((_QWORD *)a2 + 17) = *((_QWORD *)this + 35);
    *((_DWORD *)a2 + 32) = 2;
  }
  if ( (*((_BYTE *)this + 296) & 4) != 0 )
  {
    *((_QWORD *)a2 + 14) = *((_QWORD *)this + 36);
    *((_DWORD *)a2 + 26) = 1;
  }
  v11 = *(_DWORD *)this & 0x200;
  if ( (*(_DWORD *)this & 0x10000) != 0 )
  {
    *((_BYTE *)a2 + 42) |= 0x20u;
  }
  else
  {
    if ( v11 || (*(_DWORD *)this & 0x2000) == 0 )
      v8 = 0;
    *((_WORD *)a2 + 20) &= ~1u;
    *((_WORD *)a2 + 20) |= v8;
  }
  *((_WORD *)a2 + 20) &= ~2u;
  v12 = 47LL;
  v13 = 0;
  if ( !v11 )
    v13 = 2;
  *((_WORD *)a2 + 20) |= v13;
  v14 = *((_WORD *)a2 + 20) & 0xFFF7 | ~(unsigned __int8)(*(_DWORD *)this >> 10) & 8;
  *((_WORD *)a2 + 20) = v14;
  *((_WORD *)a2 + 20) = v14 & 0xFFEF | ~(unsigned __int8)(*(_DWORD *)this >> 9) & 0x10;
  RtlInitializeBitMap(&BitMapHeader, (PULONG)this + 96, 0x2Fu);
  v15 = (_DWORD *)((char *)a2 + 164);
  do
  {
    if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, v7) )
      *v15 = 2;
    ++v7;
    ++v15;
    --v12;
  }
  while ( v12 );
}
