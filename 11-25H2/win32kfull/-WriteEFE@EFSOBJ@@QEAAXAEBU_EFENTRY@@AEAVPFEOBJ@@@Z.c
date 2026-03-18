/*
 * XREFs of ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x140102DBC
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1401025BC (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x140102B24 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 * Callees:
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x140102268 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 *     cjCopyFontDataW @ 0x140102FD8 (cjCopyFontDataW.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall EFSOBJ::WriteEFE(__int64 **this, const struct _EFENTRY *a2, struct PFEOBJ *a3)
{
  __int64 *v6; // r9
  __int64 v7; // r12
  BOOL v8; // r15d
  int v9; // edi
  __int64 v10; // rcx
  unsigned int v11; // r13d
  void *v12; // rax
  const void *v13; // rsi
  size_t v15; // [rsp+90h] [rbp+18h]

  *((_DWORD *)*this + 28) += *(_DWORD *)(*(_QWORD *)a3 + 128LL);
  v6 = *this;
  if ( !*((_DWORD *)*this + 7) && v6[2] )
  {
    if ( *((_DWORD *)v6 + 6) < *(_DWORD *)(*(_QWORD *)a3 + 128LL) )
    {
      *((_DWORD *)v6 + 7) = 111;
    }
    else if ( v6[11] + 8 <= (unsigned __int64)v6[12] || (unsigned int)EFSOBJ::bGrow((EFSOBJ *)this) )
    {
      *(_QWORD *)(*this)[11] = *(_QWORD *)a2;
      (*this)[11] += 8LL;
      v7 = 0LL;
      v8 = 0;
      v9 = 1;
      v10 = **this;
      if ( v10 )
      {
        v7 = **this;
        if ( (*((_BYTE *)a2 + 4) & 2) != 0 )
        {
          v8 = 1;
          LOBYTE(v9) = *((_BYTE *)a2 + 5);
        }
        else
        {
          v8 = (*(_BYTE *)(v10 + 129) & 1) == 0;
          LOBYTE(v9) = *(_BYTE *)(v10 + 128);
        }
        v9 = (unsigned __int8)v9;
      }
      else
      {
        if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
          v7 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(0LL, a2, a3) + 96) + 19680LL)
             + 196LL * *((unsigned __int16 *)a2 + 3);
        if ( (*((_BYTE *)a2 + 4) & 2) != 0 )
        {
          v8 = 1;
          v9 = *((unsigned __int8 *)a2 + 5);
        }
      }
      v11 = *(_DWORD *)(*(_QWORD *)a3 + 128LL);
      v12 = (void *)AllocFreeTmpBuffer(v11);
      v13 = v12;
      if ( v12 )
      {
        memset_0(v12, 0, v11);
        v15 = cjCopyFontDataW(*this + 4, v13, a3, *(unsigned int *)a2, v7, v9, v8);
        memmove((void *)(*this)[2], v13, v15);
        FreeTmpBuffer(v13);
        (*this)[2] += v15;
        *((_DWORD *)*this + 6) -= v15;
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
