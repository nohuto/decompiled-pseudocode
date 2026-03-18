/*
 * XREFs of ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x140002780
 * Callers:
 *     VidSchCancelPresentAtFlips @ 0x140040840 (VidSchCancelPresentAtFlips.c)
 * Callees:
 *     ?VidSchiAbortSoftwarePacket@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@_K@Z @ 0x140002A34 (-VidSchiAbortSoftwarePacket@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@_K@Z.c)
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x140003020 (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiCancelIndependentFlips @ 0x140003498 (VidSchiCancelIndependentFlips.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 */

void __fastcall VidSchiCancelQueuedIndependentFlips(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct _VIDSCH_DEVICE *a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int *a8,
        unsigned int *a9)
{
  char *v9; // rdi
  char *i; // r9
  _QWORD *v15; // r10
  _QWORD *k; // r8
  char *v17; // rdi
  char *m; // r8
  unsigned int *v19; // rdx
  int v20; // r9d
  unsigned int kk; // ecx
  __int64 v22; // r8
  unsigned int v23; // eax
  _QWORD *v24; // r10
  _QWORD *j; // r8
  _QWORD *v26; // r8
  _DWORD *v27; // r11
  int v28; // r10d
  unsigned int v29; // r8d
  _QWORD *v30; // r8
  _DWORD *v31; // r11
  _QWORD *v32; // rsi
  _QWORD *n; // r9
  _QWORD *v34; // r14
  _QWORD *ii; // r10
  _QWORD *v36; // r10
  _DWORD *v37; // r11
  unsigned int jj; // ecx
  __int64 v39; // r8
  unsigned int v40; // eax
  int v41; // r10d
  unsigned int *v42; // rax
  unsigned int v43; // ecx
  unsigned int v44; // [rsp+30h] [rbp-30h]
  struct _VIDSCH_GLOBAL *v45; // [rsp+40h] [rbp-20h] BYREF
  __int64 v46; // [rsp+48h] [rbp-18h] BYREF
  __int64 *v47; // [rsp+50h] [rbp-10h]
  char v48; // [rsp+58h] [rbp-8h]
  int v49; // [rsp+5Ch] [rbp-4h]
  bool v50; // [rsp+A0h] [rbp+40h] BYREF

  v9 = (char *)a3 + 80;
  for ( i = (char *)*((_QWORD *)a3 + 10); i != v9; i = *(char **)i )
  {
    v24 = i + 648;
    for ( j = (_QWORD *)*((_QWORD *)i + 81); j != v24; j = (_QWORD *)*v26 )
    {
      if ( VidSchiAbortSoftwarePacket((struct _VIDSCH_QUEUE_PACKET *)(j - 4), a5) )
        ++*v27;
    }
    v15 = i + 664;
    for ( k = (_QWORD *)*((_QWORD *)i + 83); k != v15; k = (_QWORD *)*v30 )
    {
      if ( VidSchiAbortSoftwarePacket((struct _VIDSCH_QUEUE_PACKET *)(k - 4), a5) )
        ++*v31;
    }
  }
  v17 = (char *)a3 + 96;
  for ( m = (char *)*((_QWORD *)a3 + 12); m != v17; m = *(char **)m )
  {
    v32 = m + 32;
    for ( n = (_QWORD *)*((_QWORD *)m + 4); n != v32; n = (_QWORD *)*n )
    {
      v34 = n + 19;
      for ( ii = (_QWORD *)n[19]; ii != v34; ii = (_QWORD *)*v36 )
      {
        if ( VidSchiAbortSoftwarePacket((struct _VIDSCH_QUEUE_PACKET *)(ii - 4), a5) )
          ++*v37;
      }
    }
  }
  if ( a4 )
  {
    v19 = a8;
    v20 = *((_DWORD *)a4 + 14);
    *a8 = -1;
    if ( *((_BYTE *)a1 + 67) )
    {
      for ( jj = *((_DWORD *)a4 + 17); jj != v20; jj = ((_BYTE)jj + 1) & 0x3F )
      {
        v39 = 1400LL * jj;
        v40 = *(_DWORD *)((char *)a4 + v39 + 1172);
        if ( v40 )
        {
          if ( v40 > 0xD || (v41 = 12864, !_bittest(&v41, v40)) )
          {
            if ( *(unsigned int *)((char *)a4 + v39 + 1176) >= a5 )
            {
              v42 = a9;
              *v19 = jj;
              v43 = ((_BYTE)v20 - 1) & 0x3F;
              v45 = a1;
              *v42 = v43;
              v47 = &v46;
              v46 = (__int64)&v46;
              v48 = 0;
              v49 = 2;
              v50 = 0;
              VidSchiCancelIndependentFlipsHwQueue((struct HwQueueStagingList *)&v45, a1, a2, a4, &v50, v19, v43, 1u);
              goto LABEL_24;
            }
          }
        }
      }
    }
    else
    {
      for ( kk = *((_DWORD *)a4 + 16); kk != v20; kk = ((_BYTE)kk + 1) & 0x3F )
      {
        v22 = 1400LL * kk;
        v23 = *(_DWORD *)((char *)a4 + v22 + 1172);
        if ( v23 )
        {
          if ( v23 > 0xF || (v28 = 45664, !_bittest(&v28, v23)) )
          {
            if ( *(unsigned int *)((char *)a4 + v22 + 1176) >= a5 )
            {
              *v19 = kk;
              break;
            }
          }
        }
      }
      v29 = *v19;
      if ( *v19 != -1 )
      {
        v45 = a1;
        v48 = 0;
        v44 = ((_BYTE)v20 - 1) & 0x3F;
        v47 = &v46;
        v49 = 2;
        v46 = (__int64)&v46;
        v50 = 0;
        *a9 = v44;
        VidSchiCancelIndependentFlips((unsigned int)&v45, (_DWORD)a1, a2, (_DWORD)a4, (__int64)&v50, v29, v44);
LABEL_24:
        *a6 = *((_DWORD *)a4 + 16);
        HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v45);
      }
    }
  }
}
