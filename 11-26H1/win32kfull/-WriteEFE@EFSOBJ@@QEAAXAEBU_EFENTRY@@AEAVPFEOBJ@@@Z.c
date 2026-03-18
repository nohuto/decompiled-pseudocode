/*
 * XREFs of ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x140100054
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1400FF9B8 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1400FFEE4 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 * Callees:
 *     cjCopyFontDataW @ 0x1401003B4 (cjCopyFontDataW.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1401D63B0 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall EFSOBJ::WriteEFE(wchar_t ***this, const struct _EFENTRY *a2, struct PFEOBJ *a3)
{
  wchar_t **v6; // r9
  wchar_t *Src; // r12
  BOOL v8; // r15d
  int v9; // edi
  wchar_t *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r13d
  void *v13; // rax
  const void *v14; // rsi
  int v15; // [rsp+38h] [rbp-40h]
  int v16; // [rsp+90h] [rbp+18h]
  size_t v17; // [rsp+90h] [rbp+18h]

  v16 = (int)a3;
  *((_DWORD *)*this + 28) += *(_DWORD *)(*(_QWORD *)a3 + 128LL);
  v6 = *this;
  if ( !*((_DWORD *)*this + 7) && v6[2] )
  {
    if ( *((_DWORD *)v6 + 6) < *(_DWORD *)(*(_QWORD *)a3 + 128LL) )
    {
      *((_DWORD *)v6 + 7) = 111;
    }
    else if ( v6[11] + 4 <= v6[12] || (unsigned int)EFSOBJ::bGrow((EFSOBJ *)this) )
    {
      *(_QWORD *)(*this)[11] = *(_QWORD *)a2;
      (*this)[11] += 4;
      Src = 0LL;
      v8 = 0;
      v9 = 1;
      v10 = **this;
      v11 = -(__int64)(v10 != 0LL);
      if ( (v11 & (unsigned __int64)v10) != 0 )
      {
        Src = **this;
        if ( (*((_BYTE *)a2 + 4) & 2) != 0 )
        {
          v8 = 1;
          LOBYTE(v9) = *((_BYTE *)a2 + 5);
        }
        else if ( v10 )
        {
          v8 = (*((_BYTE *)v10 + 129) & 1) == 0;
          LOBYTE(v9) = *((_BYTE *)v10 + 128);
        }
        v9 = (unsigned __int8)v9;
      }
      else
      {
        if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
          Src = (wchar_t *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v11, v10, a3) + 96) + 19656LL)
                          + 196LL * *((unsigned __int16 *)a2 + 3));
        if ( (*((_BYTE *)a2 + 4) & 2) != 0 )
        {
          v8 = 1;
          v9 = *((unsigned __int8 *)a2 + 5);
        }
      }
      v12 = *(_DWORD *)(*(_QWORD *)a3 + 128LL);
      v13 = (void *)AllocFreeTmpBuffer(v12);
      v14 = v13;
      if ( v13 )
      {
        memset_0(v13, 0, v12);
        v17 = cjCopyFontDataW(*(_DWORD *)this + 32, (int)v14, v16, *(_DWORD *)a2, Src, v9, v8, v15);
        memmove((*this)[2], v14, v17);
        FreeTmpBuffer(v14);
        (*this)[2] = (wchar_t *)((char *)(*this)[2] + v17);
        *((_DWORD *)*this + 6) -= v17;
      }
      else
      {
        *((_DWORD *)*this + 7) = 8;
      }
    }
    else
    {
      *((_DWORD *)*this + 7) = 14;
    }
  }
}
