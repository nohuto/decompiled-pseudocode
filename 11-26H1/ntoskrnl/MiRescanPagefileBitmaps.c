/*
 * XREFs of MiRescanPagefileBitmaps @ 0x1404441FC
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1403FEF30 (MiFindFreePageFileSpace.c)
 * Callees:
 *     MiRescanPageFileBitmapPortion @ 0x140444C08 (MiRescanPageFileBitmapPortion.c)
 *     RtlFindNextClearRunUlong @ 0x140444EC4 (RtlFindNextClearRunUlong.c)
 *     MiInitializePagefileBitmapsCache @ 0x140445150 (MiInitializePagefileBitmapsCache.c)
 */

__int64 __fastcall MiRescanPagefileBitmaps(__int64 a1)
{
  __int64 v1; // r13
  int v2; // ebx
  int v4; // r8d
  __int64 v5; // rdi
  int v6; // edx
  int v7; // r15d
  __int64 result; // rax
  _DWORD v9[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v10; // [rsp+38h] [rbp-8h]
  int v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  v2 = 0;
  v11 = 0;
  v9[1] = 0;
  MiInitializePagefileBitmapsCache(a1);
  v5 = *(_QWORD *)(a1 + 144);
  v6 = 0;
  v9[0] = *(_DWORD *)a1;
  v10 = *(_QWORD *)(v1 + 32);
  v12 = v5;
  while ( 1 )
  {
    result = RtlFindNextClearRunUlong((unsigned int)v9, v6, v4, -1, (__int64)&v11);
    if ( !(_DWORD)result )
      break;
    v4 = v11;
    v7 = v11 + result;
    if ( (unsigned int)result > *(_DWORD *)(v5 + 52) )
    {
      MiRescanPageFileBitmapPortion(a1, v1 + 8, v11, result, (__int64)&v12);
      v5 = v12;
    }
    v6 = v7;
  }
  if ( *(_QWORD *)(a1 + 144) == a1 + 144 )
    v2 = *(_DWORD *)(v5 + 52);
  *(_DWORD *)(a1 + 108) = v2;
  return result;
}
