/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1400389EC
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x140049E60 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIsExpectedVSyncCookie(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3,
        struct _VIDSCH_VSYNC_COOKIE *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v8; // edx
  _DWORD *v9; // r9
  unsigned int v10; // r8d
  bool v11; // zf
  int v12; // eax
  char v13; // r11
  char v14; // cl
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  int v19; // esi
  int v20; // ecx
  unsigned int v21; // edi
  unsigned int v22; // esi
  int v23; // eax
  char v24; // cl
  char v25; // r9
  char v26; // dl
  _DWORD *v27; // r13
  int v28; // r12d
  int v29; // r10d
  __int64 v30; // r9
  int v31; // edx
  int v32; // ecx
  int v33; // eax
  __int64 v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+28h] [rbp-40h]
  char v36; // [rsp+78h] [rbp+10h]
  char v37; // [rsp+88h] [rbp+20h]

  v4 = *((_DWORD *)a4 + 29);
  v5 = 0;
  if ( v4 && v4 != *((_DWORD *)a3 + 270) )
    return 0LL;
  v8 = *((_DWORD *)a4 + 4);
  if ( v8 == 10 )
  {
    v9 = (_DWORD *)*((_QWORD *)a3 + 149);
    if ( (*((_DWORD *)a3 + 288) & 0x10) != 0 )
      v10 = (*v9 | (*v9 >> 10)) & 0x3FF;
    else
      v10 = (1 << *((_DWORD *)a1 + 40)) - 1;
    v11 = !_BitScanForward((unsigned int *)&v12, v10);
    v13 = 0;
    v14 = -1;
    if ( !v11 )
      v14 = v12;
    while ( v10 )
    {
      v16 = *(_QWORD *)((char *)v9 + (unsigned int)(8 * v13 * (v9[2] + 28)) + 32);
      if ( v16 && v16 != *((_QWORD *)a4 + 2 * v14 + 16) )
        return v5;
      v17 = 1 << v14;
      v14 = -1;
      v10 &= ~v17;
      v11 = !_BitScanForward((unsigned int *)&v17, v10);
      if ( !v11 )
        v14 = v17;
      ++v13;
    }
    return 1;
  }
  v18 = *((_DWORD *)a3 + 288) & 0x10;
  if ( v8 == 3 )
  {
    if ( !v18 )
    {
      LOBYTE(v5) = *((_QWORD *)a4 + 16) == *(_QWORD *)((unsigned int)(8
                                                                    * *(_DWORD *)(*((_QWORD *)a3 + 149) + 4LL)
                                                                    * (*(_DWORD *)(*((_QWORD *)a3 + 149) + 8LL) + 28))
                                                     + *((_QWORD *)a3 + 149)
                                                     + 48LL);
      return v5;
    }
    return 0LL;
  }
  v19 = *((_DWORD *)a4 + 30);
  if ( v18 )
  {
    if ( (v19 & (**((_DWORD **)a3 + 149) >> 10) & 0x3FF) != 0 )
      return 0LL;
    v20 = **((_DWORD **)a3 + 149);
    if ( (v19 & v20 & 0x3FF) != (v20 & 0x3FF) )
      return 0LL;
    v21 = 1;
    if ( (v20 & 0x3FF) != 0 )
    {
      v22 = *((_DWORD *)a4 + 30) & 0x3FF;
      v11 = !_BitScanForward((unsigned int *)&v23, v22);
      v24 = -1;
      v37 = 0;
      v25 = 0;
      if ( !v11 )
        v24 = v23;
      v36 = 0;
      v26 = 0;
      while ( v22 )
      {
        v27 = (_DWORD *)*((_QWORD *)a3 + 149);
        v28 = 1 << v24;
        if ( (*v27 & (1 << v24) & 0x3FF) != 0 )
        {
          v29 = v27[2];
          v35 = v25;
          v30 = 5LL * v25;
          if ( *(_QWORD *)((char *)&v27[16 * (unsigned __int64)(unsigned int)v26 + 12]
                         + v27[1] * ((8 * v29 + 231) & 0xFFFFFFF8)) != *((_QWORD *)a4 + v30 + 16) )
            return 0LL;
          v34 = (unsigned int)(8 * v26 * (v29 + 28));
          if ( RtlCompareMemory((char *)v27 + v34 + 168, (char *)a4 + 8 * v30 + 136, 8uLL) != 8 )
            return 0LL;
          if ( RtlCompareMemory((char *)v27 + v34 + 176, (char *)a4 + 32 * v35 + 8 * v35 + 144, 8uLL) != 8 )
            return 0LL;
          v31 = *(_DWORD *)((char *)v27 + v34 + 196);
          v32 = *((_DWORD *)a4 + 10 * v35 + 40);
          if ( (((unsigned __int8)v31 ^ *((_BYTE *)a4 + 40 * v35 + 160)) & 1) != 0
            || (((unsigned __int8)v31 ^ (unsigned __int8)v32) & 2) != 0
            || (((unsigned __int8)v31 ^ (unsigned __int8)v32) & 0x18) != 0 )
          {
            return 0LL;
          }
          v25 = v37;
          v26 = ++v36;
        }
        v22 &= ~v28;
        v24 = -1;
        v11 = !_BitScanForward((unsigned int *)&v33, v22);
        if ( !v11 )
          v24 = v33;
        v37 = ++v25;
      }
    }
  }
  else
  {
    v21 = 1;
    if ( (*((_DWORD *)a4 + 30) & 0x3FF) != 1
      || *((_QWORD *)a4 + 16) != *(_QWORD *)((unsigned int)(8
                                                          * *(_DWORD *)(*((_QWORD *)a3 + 149) + 4LL)
                                                          * (*(_DWORD *)(*((_QWORD *)a3 + 149) + 8LL) + 28))
                                           + *((_QWORD *)a3 + 149)
                                           + 48LL) )
    {
      return 0;
    }
  }
  return v21;
}
